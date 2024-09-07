// template debug
#ifndef DEBUG
#define DEBUG
// debug can use for vector,set,map,int,string,float,double
#define debugArr(x,y) cerr << "[" << #x << "]: ";_print(x,y);cerr << endl;
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ";cerr << "(";_print(__VA_ARGS__);cerr << ")\n";;

// debug value
template<typename T> void _print(const T& arg){cerr << arg;}
// debug vector
template<typename V> void _print(const vector<V>& arg){cerr << "[ ";for(V bil : arg) cerr << bil << " | ";cerr << "]";}
// debug map
template<typename K,typename V> void _print(const map<K,V>& arg){cerr << "{ ";for(auto &val : arg) cerr << val.first << " <-> " << val.second << " | ";cerr << "}";}
// debug array[]
template<typename A> void _print(const A args[],const int len){cerr << "[ ";for(int i = 0;i < len;i++)cerr << args[i] << " | ";cerr << "]";}
// debug set
template<typename S> void _print(const set<S>& argset){cerr << "[ ";for(S val : argset)cerr << val << " | "; cerr << "]";}
// debug init
template<typename Head,typename... Tail>void _print(Head H,Tail... T){_print(H);cerr << ',';_print(T...);}
// debug vector pair
template<typename K,typename V> void _print(const vector<pair<K,V>>& arg){for(const pair<K,V>& s_arg : arg) cerr << '{' << s_arg.first << ',' << s_arg.second << '}';}
#endif



