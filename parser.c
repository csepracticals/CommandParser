#include "string_util.h"
#include "cliconst.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cons_input_buffer[CONS_INPUT_BUFFER_SIZE];

void parse_input_cmd(char *input, unsigned int len){

    char** tokens = NULL; // ptr to array of tokens
    int token_cnt = 0;

    tokens = tokenizer(input, ' ', &token_cnt);
    /* We will discuss what next … */


}

void command_parser(){

    while(1){

        printf("%s", cons_input_buffer);

        fgets((char *)cons_input_buffer, sizeof(cons_input_buffer)-1, stdin);

        parse_input_cmd(cons_input_buffer, strlen(cons_input_buffer));

        memset(cons_input_buffer, 0, CONS_INPUT_BUFFER_SIZE);
        strncpy(cons_input_buffer, DEFAULT_DEVICE_NAME, strlen(DEFAULT_DEVICE_NAME));
    }
}

