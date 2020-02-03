#include <iostream>
#include <chrono>	//used for time 
#include "benchmark.h"

void Benchmark::integer_operation() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now(); //This will start the clock before bench
											  //benchmarks run
	int answ;
// 	for (long i = 0; i < 100000000000; i++) {
// 		answ = 2 + 2;
// 	}
	
	for (long i = 0; i < 50000000000; i++) {
		answ = 2 * 4;
	}
	
	end = std::chrono::system_clock::now();	
	std::chrono::duration<double> elapsed_seconds = end - start; 
	std::cout << "exe time: "<< elapsed_seconds.count() << std::endl;
}