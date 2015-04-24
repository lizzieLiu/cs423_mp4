#include <stdio.h>
#include <string>

#include "dynamicLoadBalancer.h"

using namespace std;

int main( int argc, char *argv[] ) {
  if ( argc != 1 ) {
    string usage = "Usage: ./app\n";
    printf("%s", usage.c_str());
    return 1;
  }

  dynamicLoadBalancer myDynamicLoadBalancer;
  myDynamicLoadBalancer.run();
  
  return 0;
}

