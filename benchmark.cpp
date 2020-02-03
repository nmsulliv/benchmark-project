#include <iostream>
#include <chrono>	//used for time 
#include "benchmark.h"
using namespace std::chrono;

void integer_operation() {
	auto start = high_resolution_clock::now(); //This will start the clock before bench
											   //benchmarks run
	int answ;
	for (long i = 0; i < 1000; i++) {
		answ = 2 + 2;
	}
	
	auto stop = high_resolution_clock::now(); 	
	auto duration = duration_cast<microseconds>(stop - start); 
	std::cout << "exe time: "<< duration.count() << std::endl;
}