

#ifndef D3_BATTLENET_H
#define D3_BATTLENET_H

#include <google/protobuf/message.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
#include <google/protobuf/text_format.h>

#include "lib\config\process_config.pb.h"
#include "lib\profanity\profanity.pb.h"
#include "lib\protocol\attribute.pb.h"
#include "lib\protocol\content_handle.pb.h"
#include "lib\protocol\descriptor.pb.h"
#include "lib\protocol\entity.pb.h"
#include "lib\protocol\exchange.pb.h"
#include "lib\protocol\exchange_object_provider.pb.h"
#include "lib\protocol\invitation.pb.h"
#include "lib\protocol\resource.pb.h"
#include "lib\rpc\connection.pb.h"
#include "lib\rpc\rpc.pb.h"
#include "service\followers\definition\followers.pb.h"
#include "service\authentication\authentication.pb.h"
#include "service\channel\channel_types.pb.h"
#include "service\channel\definition\channel.pb.h"
#include "service\channel_invitation\channel_invitation_types.pb.h"
#include "service\channel_invitation\definition\channel_invitation.pb.h"
#include "service\exchange\exchange.pb.h"
#include "service\exchange\exchange_types.pb.h"
#include "service\friends\friends_types.pb.h"
#include "service\friends\definition\friends.pb.h"
#include "service\game_master\game_factory.pb.h"
#include "service\game_master\game_master.pb.h"
#include "service\game_master\game_master_types.pb.h"
#include "service\game_utilities\game_utilities.pb.h"
#include "service\notification\notification.pb.h"
#include "service\presence\presence.pb.h"
#include "service\presence\presence_types.pb.h"
#include "service\search\search.pb.h"
#include "service\search\search_types.pb.h"
#include "service\server_pool\server_pool.pb.h"
#include "service\storage\storage.pb.h"
#include "service\toon\toon.pb.h"
#include "service\toon\toon_external.pb.h"
#include "service\user_manager\user_manager.pb.h"

#include "rpcproc.h"

#endif