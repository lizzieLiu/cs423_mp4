#ifndef _DYNAMICLOADBALANCER_H_
#define _DYNAMICLOADBALANCER_H_

#include <stdio.h>

#include "transferManager.h"
#include "hardwareMonitor.h"
#include "stateManager.h"
#include "adapter.h"

class dynamicLoadBalancer {
 public:
  dynamicLoadBalancer();
  ~dynamicLoadBalancer();

  void loadLocalJobs();
  void run();

 private:
  transferManager *myTransferManager;
  stateManager *myStateManager;
  hardwareMonitor *myHardwareMonitor;
  adapter *myAdapter;
};

#endif /* _DYNAMICLOADBALANCER_H_ */
