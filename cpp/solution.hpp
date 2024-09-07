bool validate(long long int n) {
	//vector<int> dbg;
	std::string sn = std::to_string(n);
	debug(sn.size());
	int N = (int)sn.size(),total = 0;
	for(int i = 0;i < N;++i){
	  if(N % 2 == i % 2){
		int temp_val = sn[i] - '0';
		debug(temp_val * 2,temp_val);
		if(temp_val * 2 > 9) total += temp_val;
		else total += (temp_val * 2);
	  } else {
		total += (sn[i] - '0');
		debug(sn[i] - '0');
	  }
	debug(total);
	}
	debug(total);
	return total % 10 == 0;
}

