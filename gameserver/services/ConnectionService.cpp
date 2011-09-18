#include "ConnectionService.h"
#include <gameserver\gamesession.h>
#include <time.h>

bool c_ConnectionService::Handle_OnConnectRequest(c_gamesession * gamesession, rpcheader * header) {	

		bnet::protocol::connection::ConnectRequest ConnectRequest;
		ConnectRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		if ((ConnectRequest.mutable_client_id()->has_epoch() == true) || (ConnectRequest.mutable_client_id()->has_label())){
			Config.SetClientProcessID(*ConnectRequest.mutable_client_id());
		} else {
			bnet::protocol::ProcessId tProcessID;
			tProcessID.set_epoch((unsigned int)time(0));
			tProcessID.set_label(0);
			Config.SetClientProcessID(tProcessID);
		}
		
		gamesession->PrintDebugMessage(false,header,&ConnectRequest); 

		bnet::protocol::connection::ConnectResponse ConnectResponse;
		ConnectResponse.mutable_client_id()->set_epoch(Config.GetClientProcessID().epoch());
		ConnectResponse.mutable_client_id()->set_label(Config.GetClientProcessID().label());
		ConnectResponse.mutable_server_id()->set_epoch(Config.GetServerProcessID().epoch());
		ConnectResponse.mutable_server_id()->set_label(Config.GetServerProcessID().label());


		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mConnectionService_ConnectResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&ConnectResponse);
	}

bool c_ConnectionService::Handle_OnBindRequest(c_gamesession * gamesession, rpcheader * header) {		

		bnet::protocol::connection::BindRequest BindRequest;
		BindRequest.ParseFromArray(header->sizing.messagepos,header->sizing.messagelength);

		gamesession->PrintDebugMessage(false,header,&BindRequest); 
	
		bnet::protocol::connection::BindResponse BindResponse;

		if (this->ServiceHandler->Config.AvailibleBindID() == 0) {
			ServiceHandler->Config.Set_AvailibleBindID(64);
		}
		
		if (BindRequest.mutable_exported_service()->size() > 0) {
			
			for (int ExportedServiceIndex=0; ExportedServiceIndex<BindRequest.mutable_exported_service()->size(); ExportedServiceIndex++) {
				ServiceHandler->BindNewImport(
					BindRequest.mutable_exported_service(ExportedServiceIndex)->hash(),
					BindRequest.mutable_exported_service(ExportedServiceIndex)->id()
					);
			}

		}

		if (BindRequest.imported_service_hash().size() > 0) {
			for (int ImportedServiceIndex=0; ImportedServiceIndex<BindRequest.imported_service_hash().size(); ImportedServiceIndex++) {
				BindResponse.add_imported_service_id(ServiceHandler->Config.AvailibleBindID());
				ServiceHandler->BindNewExport(BindRequest.imported_service_hash(ImportedServiceIndex),ServiceHandler->Config.AvailibleBindID());
				
			}

		}

		rpcheader txheader;
		txheader.service = 0xFE; 
		txheader.method = mConnectionService_BindResponse;
		txheader.reqid = header->reqid;
		
		return gamesession->SendpMessage(&txheader,&BindResponse);

	}