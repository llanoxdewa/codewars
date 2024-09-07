#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <typeinfo>
#include <math.h>
using namespace std;

void print() {cout << '\n';}

template<typename Head,typename... Tail>
void print(Head head,Tail... tail){
	cout << head << ' ';
	print(tail...);
}


template<typename K,typename V>
using vp = vector<pair<K,V>>;

template<typename T>
void print_vector(const vector<T>& v){
	for(const T el : v){
		cout << el << ' ';	
	}
	cout << '\n';
}

const int MAX_N = int(1e5);
const int MAX_BIL = int(1e6);

int main(){
	print(*(std::typeid(sqrt(5)).name()));
	print(*(std::typeid(1).name()));





return 0;}
