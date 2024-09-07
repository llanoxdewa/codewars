

template<typename T>
void merge_array(vector<T>& nums1,vector<T>& nums2){
	int N = int(nums1.size());
	for(int num : nums2){
		debug(nums1);
		for(int i = N - 1;i >= 0;--i){	
			if(nums1[i] <= num /*&& nums1[i] > 0*/){
				nums1.push_back(0);	
				++N;
				for(int j = N - 1;j > i + 1;--j){
					swap(nums1[j],nums1[j - 1]);
				}
				nums1[i + 1] = num;
				break;	
			}
		}
	}
}
