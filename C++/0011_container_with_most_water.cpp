class Solution{
public:
	int maxArea(vector<int>& height){
		int L = 0, R = height.size() - 1, res = 0;
		if(R <= L) return 0;
		while(L < R){
			int temp = (R - L) * min(height[R], height[L]);
			if(temp > res) res = temp;
			if(height[R] > height[L]){ ++L; }
			else{ --R; }	
		}
		return res;
	}
};
