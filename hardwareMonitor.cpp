#include <stdio.h>
#include "hardwareMonitor.h"

#define DEBUG 1

hardwareMonitor::hardwareMonitor() {
  if ( DEBUG )
    printf("===init hardwareMonitor===\n");

}

void 
hardwareMonitor::run() {
  if ( DEBUG )
    printf("===running hardwareMonitor===\n");
}
