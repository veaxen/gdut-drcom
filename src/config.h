#ifndef __CONFIG_H__
#define __CONFIG_H__

enum CRYPT_TYPE {
    DISABLE_CRYPT=0,
    ENABLE_CRYPT=1,
    AUTO_CRYPT=2
};

struct config_s {
    char remote_ip[20];
    int remote_port;
    unsigned char keep_alive1_flag;
    int enable_crypt;
};

extern struct config_s drcom_config;

int parse_config(char * conf_file_name);

#endif //__CONFIG_H__
