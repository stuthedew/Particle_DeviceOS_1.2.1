/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9 at Thu Sep 20 16:27:34 2018. */

#include "wifi_new.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t particle_ctrl_wifi_Credentials_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, particle_ctrl_wifi_Credentials, type, type, 0),
    PB_FIELD(  2, STRING  , SINGULAR, CALLBACK, OTHER, particle_ctrl_wifi_Credentials, password, type, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_JoinNewNetworkRequest_fields[5] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_wifi_JoinNewNetworkRequest, ssid, ssid, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_JoinNewNetworkRequest, bssid, ssid, 0),
    PB_FIELD(  3, UENUM   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_JoinNewNetworkRequest, security, bssid, 0),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_JoinNewNetworkRequest, credentials, security, &particle_ctrl_wifi_Credentials_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_JoinNewNetworkReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_JoinKnownNetworkRequest_fields[2] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_wifi_JoinKnownNetworkRequest, ssid, ssid, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_JoinKnownNetworkReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_GetKnownNetworksRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_GetKnownNetworksReply_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, particle_ctrl_wifi_GetKnownNetworksReply, networks, networks, &particle_ctrl_wifi_GetKnownNetworksReply_Network_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_GetKnownNetworksReply_Network_fields[4] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_wifi_GetKnownNetworksReply_Network, ssid, ssid, 0),
    PB_FIELD(  2, UENUM   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_GetKnownNetworksReply_Network, security, ssid, 0),
    PB_FIELD(  3, UENUM   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_GetKnownNetworksReply_Network, credentials_type, security, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_RemoveKnownNetworkRequest_fields[2] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_wifi_RemoveKnownNetworkRequest, ssid, ssid, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_RemoveKnownNetworkReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_ClearKnownNetworksRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_ClearKnownNetworksReply_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_GetCurrentNetworkRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_GetCurrentNetworkReply_fields[5] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_wifi_GetCurrentNetworkReply, ssid, ssid, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_GetCurrentNetworkReply, bssid, ssid, 0),
    PB_FIELD(  3, INT32   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_GetCurrentNetworkReply, channel, bssid, 0),
    PB_FIELD(  4, INT32   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_GetCurrentNetworkReply, rssi, channel, 0),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_ScanNetworksRequest_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_ScanNetworksReply_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, particle_ctrl_wifi_ScanNetworksReply, networks, networks, &particle_ctrl_wifi_ScanNetworksReply_Network_fields),
    PB_LAST_FIELD
};

const pb_field_t particle_ctrl_wifi_ScanNetworksReply_Network_fields[6] = {
    PB_FIELD(  1, STRING  , SINGULAR, CALLBACK, FIRST, particle_ctrl_wifi_ScanNetworksReply_Network, ssid, ssid, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_ScanNetworksReply_Network, bssid, ssid, 0),
    PB_FIELD(  3, UENUM   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_ScanNetworksReply_Network, security, bssid, 0),
    PB_FIELD(  4, INT32   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_ScanNetworksReply_Network, channel, security, 0),
    PB_FIELD(  5, INT32   , SINGULAR, STATIC  , OTHER, particle_ctrl_wifi_ScanNetworksReply_Network, rssi, channel, 0),
    PB_LAST_FIELD
};




/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(particle_ctrl_wifi_JoinNewNetworkRequest, credentials) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_particle_ctrl_wifi_Credentials_particle_ctrl_wifi_JoinNewNetworkRequest_particle_ctrl_wifi_JoinNewNetworkReply_particle_ctrl_wifi_JoinKnownNetworkRequest_particle_ctrl_wifi_JoinKnownNetworkReply_particle_ctrl_wifi_GetKnownNetworksRequest_particle_ctrl_wifi_GetKnownNetworksReply_particle_ctrl_wifi_GetKnownNetworksReply_Network_particle_ctrl_wifi_RemoveKnownNetworkRequest_particle_ctrl_wifi_RemoveKnownNetworkReply_particle_ctrl_wifi_ClearKnownNetworksRequest_particle_ctrl_wifi_ClearKnownNetworksReply_particle_ctrl_wifi_GetCurrentNetworkRequest_particle_ctrl_wifi_GetCurrentNetworkReply_particle_ctrl_wifi_ScanNetworksRequest_particle_ctrl_wifi_ScanNetworksReply_particle_ctrl_wifi_ScanNetworksReply_Network)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(particle_ctrl_wifi_JoinNewNetworkRequest, credentials) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_particle_ctrl_wifi_Credentials_particle_ctrl_wifi_JoinNewNetworkRequest_particle_ctrl_wifi_JoinNewNetworkReply_particle_ctrl_wifi_JoinKnownNetworkRequest_particle_ctrl_wifi_JoinKnownNetworkReply_particle_ctrl_wifi_GetKnownNetworksRequest_particle_ctrl_wifi_GetKnownNetworksReply_particle_ctrl_wifi_GetKnownNetworksReply_Network_particle_ctrl_wifi_RemoveKnownNetworkRequest_particle_ctrl_wifi_RemoveKnownNetworkReply_particle_ctrl_wifi_ClearKnownNetworksRequest_particle_ctrl_wifi_ClearKnownNetworksReply_particle_ctrl_wifi_GetCurrentNetworkRequest_particle_ctrl_wifi_GetCurrentNetworkReply_particle_ctrl_wifi_ScanNetworksRequest_particle_ctrl_wifi_ScanNetworksReply_particle_ctrl_wifi_ScanNetworksReply_Network)
#endif


/* @@protoc_insertion_point(eof) */
