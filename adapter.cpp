#include <stdio.h>
#include "adapter.h"

#define DEBUG 1

adapter::adapter( ) {
  if ( DEBUG )
    printf("===init adapter===\n");

}

void 
adapter::run() {
  if ( DEBUG )
    printf("===running adapter===\n");
}
