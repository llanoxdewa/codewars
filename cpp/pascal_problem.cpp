#include <vector>
std::vector<long long> pascalsTriangle(int n)
{
  std::vector<long long> ans;
  int total_row = 0;
  for(int row = 1;row <= n;++row){
    ans.push_back(1);
    int n = total_row - (row - 1); // problem with find previously index
    for(int c = 0;c < row - 2;++c){
      ans.push_back(ans[n + c] + ans[n  + c + 1]);
    }
	total_row += row;
    if(row > 1){
		ans.push_back(1);
    }
  }
  return ans;
}

