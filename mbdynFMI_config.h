#include "mbdynFMI.h"

#define BUFFER 1000

void importlogger(jm_callbacks* c, jm_string module, jm_log_level_enu_t log_level, jm_string message);

void setup_callbacks(jm_callbacks* callbacks);

int error(const char* test, int value);

int sumde(int x, int y);

char* UncompressLocation(const char* location);
