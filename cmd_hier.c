
#include "libcli.h"
#include "cliconst.h"
#include <memory.h>

extern void command_parser();
extern char cons_input_buffer[CONS_INPUT_BUFFER_SIZE]; 

void start_shell(){

    command_parser();
}

void init_libcli(){
    memset(cons_input_buffer, 0, CONS_INPUT_BUFFER_SIZE);
    strncpy(cons_input_buffer, DEFAULT_DEVICE_NAME, strlen(DEFAULT_DEVICE_NAME));
}

