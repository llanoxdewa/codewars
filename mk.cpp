#include <iostream>
#include <chrono>
using namespace std;


int main(){
	

	cout << "hello world" << endl;
	auto t_start = chrono::high_resolution_clock::now();
	cout << "[COMPILE]" << '\n';
	system("g++ -std=c++17 -DLOCAL -Wall -O2 code.cpp -o code 2> err.log");
	system("type err.log");
	auto t_end = chrono::high_resolution_clock::now();
	int elapsed_time_ms = chrono::duration<double, milli>(t_end-t_start).count();
	cout << "compile done in " << elapsed_time_ms << "ms"<< endl;
	return 0;
}




