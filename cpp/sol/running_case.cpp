#include <iostream>
#include <map>
#include <stack>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <array>
#include <set>
#include <assert.h>
#include <bitset>
#include <functional>
using namespace std;

// debuging
#include "debug.h"

// linked list node
// #include "linked_list_node.hpp"

// testing function
#include "testing_case.hpp"





// TODO: make your prototype function here
void live_test(const int t = 1){
	// TODO: replace func with your function name 

	for(int i = 1;i <= t;++i){
		cout << "input for case #" << i << ": ";
		// [INPUT HERE]

		cout << "output case #" << i << ": ";
		// your func name here	

	}

};


/* LLANO BUILTIN FUNCTION FOR TESTING CASE CODEWARS  
	+ use isTruePair for string,int,etc...
	+ use isTruePairArr for array data type  
	+ use isTruePairMap for map data type
	+ use isTruePairPair for pair data type
*/

#include "ds.hpp";
/*
1
1 1
1 2 1


*/

class Solution {
public:
    vector<vector<int>> generate(int n) {
      vector<int> top = {1};
      vector<vector<int>> ans;
      ans.push_back(top);
      n -= 1;
      while(n--){
        vector<int> lower;
        lower.push_back(top.front());
        int N = (int)top.size();
        for(int i = 0;i < N - 1;++i)
          lower.push_back(top[i] + top[i + 1]);
        lower.push_back(top.back());
        ans.push_back(lower);
        top = lower;
      }
      return ans;
    }
};



/*******************************************************************************/
int main(){  
    Solution sol;
    /*
    TreeNode* inp = new TreeNode(10,new TreeNode(2,new TreeNode(5),nullptr),new
    TreeNode(3,new TreeNode(100,new TreeNode(1),new TreeNode(7)),nullptr));
    */
    // TreeNode* inp = new TreeNode(1,new TreeNode(2), new TreeNode(3));
    for(auto el : sol.generate(5))
      print(el);



	return 0;
}




