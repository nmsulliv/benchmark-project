#include <iostream>
#include <chrono>	//used for time 
#include <fstream>	//used for files
#include "benchmark.h"

void Benchmark::integer_operation() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now(); //This will start the clock before bench
											  //benchmarks run
	int answ;
	// for loop for 10^11 additions
	for (long i = 0; i < 100000000000; i++) {
		answ = 2 + 2;
	}
	
	// for loop for 5 x 10^10 multiplications
	for (long i = 0; i < 50000000000; i++) {
		answ = 2 * 4;
	}
	
	//for loop for 2 x 10^10 divisions
	for (long i = 0; i < 20000000000; i++) {
		answ = 4 / 2;
	}
	
	end = std::chrono::system_clock::now();	
	std::chrono::duration<double> elapsed_seconds = end - start; 
	std::cout << "Integer Operation Benchmark Execution Time: "<< elapsed_seconds.count() << " seconds " << std::endl;
}

void Benchmark::floatingp_operation() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now(); //This will start the clock before bench
											  //benchmarks run
	
	float answ;
	// for loop for 10^11 additions
	for (long i = 0; i < 100000000000; i++) {
		answ = 2.1 + 2.1;
	}
	
	// for loop for 5 x 10^10 multiplications
	for (long i = 0; i < 50000000000; i++) {
		answ = 2.1 * 4.1;
	}
	
	//for loop for 2 x 10^10 divisions
	for (long i = 0; i < 20000000000; i++) {
		answ = 4.1 / 2.2;
	}
	
	end = std::chrono::system_clock::now();	
	std::chrono::duration<double> elapsed_seconds = end - start; 
	std::cout << "Floating Point Operation Benchmark Execution Time: "<< elapsed_seconds.count() << " seconds " << std::endl;
}

void Benchmark::memory() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now(); //This will start the clock before bench
											  //benchmarks run
	int* a = new int[5000000000];
	// for loop to write elements into array
	for (long i = 0; i < 5000000000; i++) {
		a[i] = 4;
	}
	
	int b;
	// for loop to read elements from array
	for (long i = 0; i < 5000000000; i++) {
		b = a[i];
	}
	
	delete [] a;	//deallocating memory
	
	end = std::chrono::system_clock::now();	
	std::chrono::duration<double> elapsed_seconds = end - start; 
	std::cout << "Memory Benchmark Execution Time: "<< elapsed_seconds.count() << " seconds " << std::endl;
}

void Benchmark::hard_drive() {
	std::chrono::time_point<std::chrono::system_clock> start, end;
	start = std::chrono::system_clock::now(); //This will start the clock before bench
											  //benchmarks run

	std::ofstream file;
	file.open ("test.txt");
	
	for (long i = 0; i < 1000000000; i++) {
  		file << 1;
	}
  	file.close();
  	
	std::ifstream inFile("test.txt");
	int n = 0;
	while(!inFile.eof()) {
    	inFile >> n;
	}

//   	remove("test.txt");
	
	end = std::chrono::system_clock::now();	
	std::chrono::duration<double> elapsed_seconds = end - start; 
	std::cout << "Hard Drive Benchmark Execution Time: "<< elapsed_seconds.count() << " seconds " << std::endl;
}