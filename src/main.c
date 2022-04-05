/**
 * @file main.c
 * @author dev-frog (nighthawkbd.com)
 * @brief
 * @version 0.1
 * @date 2021-02-17
 * @copyright Copyright (c) 2021
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/util.h"


int main(int argc,char** argv){
   if(argc < 3){
       printf("Error\n");
       return 1;
   }

   if(strcmp(argv[1],"compile") == 0){
       char* source = read_ascii_file(argv[2]);
       printf("%s\n",source);
       free(source);
   }

    return 0;
}