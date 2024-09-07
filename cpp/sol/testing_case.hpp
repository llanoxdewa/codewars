#ifndef __TESTING_CASE
#define __TESTING_CASE
#define Equals(val) val
#define VVI vector<vector<int>>

template<typename T>
void print(T val){ cout << (val) << '\n'; }

template<typename V>
void print(const vector<V>& v){
	for(const V el : v) cout << el << " ";	
	cout << '\n';
}

void print(){ cout << '\n'; }

template<typename Head,typename... Tail>
void print(Head h,Tail... t){
	cout << h << ' ';
	print(t...);
}

// for basic data type and string
template<typename T,typename S>
void isTrue(const T &user_ans,const S &rans,const int n = 0){
	if(user_ans == rans){
		cout << "test " << n << " passed" << '\n';
	} else {
		cout << "test " << n << " failed " << '\n';
		cout << "\texpected: " << rans << '\n';
		cout << "\tgot: " << user_ans << '\n';
	}
}

// for array case
template<typename T>
void isTrueArr(const T &user_ans,const T &rans,const int n = 0){
	int N = (int)user_ans.size();
	int S = (int)rans.size();
	if(N != S){
		cout << "test " << n << " failed" << '\n';
		cout << "\texpected: ";
		for(auto& el : rans) cout << el << " ";
		cout << '\n';
		cout << "\tgot: ";
		for(auto& el : user_ans) cout << el << " ";
		cout << '\n';
		return;
	}
	bool is_valid = true;
	for(int i = 0;i < N;i++){
		if(user_ans[i] == rans[i])
			continue;
		is_valid = false;
		break;
	}
	// cek if test is valid or not
	if(!is_valid){
		cout << "test " << n << " not valid" << '\n';
		cout << "\texpected: ";
		for(auto& el : rans) cout << el << " ";
		cout << '\n';
		cout << "\tgot: ";
		for(auto& el : user_ans) cout << el << " ";
		cout << '\n';
	} else {
		cout << "test " << n << " is passed" << '\n';
	}
}

template<typename T>
void isTrueMap(const T &user_ans,const T &rans,const int n = 0){
	bool isValid = true;
	int N = (int)user_ans.size();
	int S = (int)user_ans.size();
	if(N != S){
		cout << "expected: ";
		for(auto& [k,v] : rans)	cout << "{" << k << "," << v << "}" << " ";
		cout << '\n';
		cout << "got: ";
		for(auto& [k,v] : user_ans) cout << "{" << k << "," << v << "}" << " ";
		cout << '\n';
		return;
	}

	auto cek_user_ans = user_ans.begin();
	auto cek_rans = rans.begin();
	for(int i = 0;i < N;i++){
		if(cek_user_ans->first == cek_rans->first && cek_user_ans->second == cek_rans->second){
			++cek_user_ans;
			++cek_rans;
			continue;
		}
		isValid = false;
		break;
	}
	if(isValid){
		cout << "test " << n << " passed\n";
	} else {
		cout << "test " << n << " failed\n";
		cout << "\texpected: ";
		for(auto& [k,v] : rans)	cout << "{" << k << "," << v << "}" << " ";
		cout << '\n';
		cout << "\tgot: ";
		for(auto& [k,v] : user_ans) cout << "{" << k << "," << v << "}" << " ";
		cout << '\n';
	}
}

template<typename T>
void isTruePair(const T &user_ans,const T &rans,const int n = 0){
	if(user_ans.first == rans.first && user_ans.second == rans.second){
		cout << "test " << n << " passed\n";
	} else {
		cout << "test " << n << " failed\n";
		cout << "\texpected: " << "{" << rans.first << "," << rans.second << "}" << '\n';
		cout << "\tgot: " << "{" << user_ans.first << "," << user_ans.second << "}" << '\n';
	}
}
template<typename A>
using V = vector<A>; 

template<typename F,typename S>
using Vpp = vector<pair<F,S>>;



#endif
