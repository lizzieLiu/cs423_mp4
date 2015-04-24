#include <stdio.h>
#include "dynamicLoadBalancer.h"

#define DEBUG 1

dynamicLoadBalancer::dynamicLoadBalancer()
  :myTransferManager( NULL ),
   myStateManager( NULL ),
   myHardwareMonitor( NULL ),
   myAdapter( NULL )
{
  if ( DEBUG )
    printf("init dynamic load balancer\n" );

  // create transfer manager, state manager, hardware monitor, adapter in order
  myTransferManager = new transferManager();
  myStateManager = new stateManager();
  myHardwareMonitor = new hardwareMonitor();
  myAdapter = new adapter();
}

dynamicLoadBalancer::~dynamicLoadBalancer()
{
  // release memory ...
  if ( myTransferManager )
    myTransferManager = NULL;

  if ( myStateManager )
    myStateManager = NULL;

  if ( myHardwareMonitor )
    myHardwareMonitor = NULL;

  if ( myAdapter )
    myAdapter = NULL;
}

void
dynamicLoadBalancer::loadLocalJobs() {
  //to do
  if ( DEBUG )
    printf("load local jobs\n");
}

void 
dynamicLoadBalancer::run( ) {

  // 1. start transfer manager
  myTransferManager->run();

  // 2. load local jobs
  loadLocalJobs();

  // 3. start state manager
  myStateManager->run();

  // 4. start hardware monitor
  myHardwareMonitor->run();
  
  // 5. start adapter
  myAdapter->run();
}
