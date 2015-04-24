#**************************************
#*
#*  Makefile for mp4 - cs423
#*
#**************************************

CFLAGS =  -Wall -g

all: app

app: main.o dynamicLoadBalancer.o transferManager.o stateManager.o hardwareMonitor.o adapter.o
	g++ -o app main.o dynamicLoadBalancer.o transferManager.o stateManager.o hardwareMonitor.o adapter.o ${CFLAGS}

main.o: main.cpp dynamicLoadBalancer.o 
	g++ -c main.cpp ${CFLAGS}

dynamicLoadBalancer.o: dynamicLoadBalancer.cpp dynamicLoadBalancer.h transferManager.o stateManager.o hardwareMonitor.o adapter.o
	g++ -c dynamicLoadBalancer.cpp ${CFLAGS}

transferManager.o: transferManager.cpp transferManager.h
	g++ -c transferManager.cpp  ${CFLAGS}

stateManager.o: stateManager.cpp stateManager.h
	g++ -c stateManager.cpp  ${CFLAGS}

hardwareMonitor.o: hardwareMonitor.cpp hardwareMonitor.h
	g++ -c hardwareMonitor.cpp  ${CFLAGS}

adapter.o: adapter.cpp adapter.h
	g++ -c adapter.cpp ${CFLAGS}

clean:
	rm -rf *.o app 
