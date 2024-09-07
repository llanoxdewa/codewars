// solution
class Solution {
public:
	string addBinary(string a,string b){
		int Na = int(a.size()),Nb = int(b.size());
		int N = min(Na,Nb);	
		string ans(N,'0');	
		char carry = '0';
		for(int i = 1;i <= N;i++){
			if(a[Na - i] == '1' && b[Nb - i] == '1'){
				if(carry == '1')
					ans[N - i] = '1';
				else 
					ans[N - i] = '0';
				if(carry == '0')
					carry = '1';
			} else if(a[Na - i] == '1' || b[Nb - i] == '1'){
				if(carry == '1')
					ans[N - i] = '0';
				else
					ans[N - i] = '1';
			} else if(a[Na - i] == '0' && b[Nb - i] == '0'){
				if(carry == '1'){
					ans[N - i] = '1';
					carry = '0';
				} else 
					ans[N - i] = '0';
			}
		}
		if(carry == '0'){
			if(Na > Nb){
				return a.substr(0,Na - N) + ans;	
			} else if(Nb > Na){
				return b.substr(0,Nb - N) + ans;	
			}	
			return ans;	
		}
			
		if(Na == Nb)
			return carry + ans; 	
		// bug 
		string akhir = "";
		while(carry == '1'){
			if(Na > Nb){
				if(a[Na - N - 1] == '1' && Na - N - 1 == 0){
					akhir += "01";
					carry = '0';
				} else  if(a[Na - N - 1] == '1'){
					akhir += '0'; 	
				} else {
					akhir += '1';	
					carry = '0';	
				}	
			} else {
				if(b[Nb - N - 1] == '1' && Nb - N - 1 == 0){
					akhir += "01";
					carry = '0';
				} else  if(b[Nb - N - 1] == '1'){
					akhir += '0'; 	
				} else {
					akhir += '1';	
					carry = '0';	
				}	
			}
			++N;	
		}
		string tambahan = "";
		if(Na > Nb) tambahan = a.substr(0,Na - N);
		if(Nb > Na) tambahan = b.substr(0,Nb - N);
		reverse(akhir.begin(),akhir.end());
		return tambahan + akhir + ans;	
	}
};
