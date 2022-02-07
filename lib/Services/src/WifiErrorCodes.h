//
// Created by Kenneth Dow on 2/2/22.
//

#ifndef SEQUENCEALL_WIFIERRORCODES_H
#define SEQUENCEALL_WIFIERRORCODES_H

typedef enum {
    INIT_STA_SUCESS = 0,
    INIT_STA_NO_CREDENTIALS_STORED = 1,

    INIT_AP_SUCCESS = 2,
    INIT_AP_NO_CREDENTIALS_STORED = 3,
    INIT_AP_ERROR = 4,

    INIT_WIFI_GENERIC_ERROR = 5,
    MDNS_COULD_NOT_ADD_SERVICE = 6,

    COULD_NOT_SET_LOCAL_HOSTNAME = 7,
    NO_REMOTE_HOSTNAME = 8,
    COULD_NOT_QUERY_REMOTE_IP = 9,
    REMOTE_HOST_QUERY_SUCCESSFUL = 10,

    INIT_WEBSERVER_ERROR = 11,

    INIT_WIFI_SERVICE_SUCCESS = 12
} WifiErrorCode;
#endif //SEQUENCEALL_WIFIERRORCODES_H