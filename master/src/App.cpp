#include <iostream>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "Gyroscope.h"
#include <iostream>

void *startSensor(void* arg){
	//Gyroscope gyro;
	//gyro.start();
	while(true){
		std::cout << "Sensor 1\n";
		usleep(100000);
	}
}


int main() {
	
	/*Turn on the thread sensor*/
	pthread_t sensorThread;
	int result;
	result = pthread_create(&sensorThread, NULL, startSensor, NULL);
	if(result != 0 ){
		std::cout << "Thread start got wrong";
	}
	pthread_join(sensorThread,NULL);
	pthread_exit(NULL);
	
return 0;
}

