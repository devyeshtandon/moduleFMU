#include "mbdynFMI_config.h"
#include <stdio.h>
#include <string.h>

void importlogger(jm_callbacks* c, jm_string module, jm_log_level_enu_t log_level, jm_string message)
{

       printf("module = %s, log level = %d: %s\n", module, log_level, message);

}

void setup_callbacks(jm_callbacks* callbacks){
	callbacks->malloc = malloc;
	callbacks->calloc = calloc;
	callbacks->realloc = realloc;
	callbacks->free = free;
	callbacks->logger = importlogger;
	callbacks->log_level = jm_log_level_debug;
	callbacks->context = 0;
	printf("Callback Setup Done! \n");
}

char* UncompressLocation(const char* location){
        int length = strlen(location);
        int i;

        for (i=length; i>0; i--){
                if(location[i]==47){
                        break;
                }
        }

        char* destination = (char*) malloc(length*sizeof(char) );
        strncpy(destination, location, i+1);
        destination[i+1] = '\0';
        return destination;
}

	
