#include <stdio.h>
#include "transferManager.h"

#define DEBUG 1

transferManager::transferManager() {
  if ( DEBUG )
    printf("===init transferManager===\n");
}

void 
transferManager::run() {
  if ( DEBUG )
    printf("===running transferManager===\n");

}
