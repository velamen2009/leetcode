class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> _map;
        vector<int> ans;
        for(int i = 0; i != nums.size(); ++i){
            int tmp = target - nums[i];
            map<int, int>::iterator it = _map.find(tmp);
            if(_map.end() != it){
                ans.push_back(it->second);
                ans.push_back(i);
                return ans;
            }
            else{
                _map.insert(pair<int, int>(nums[i], i));
            }
        }
        return ans;
    }
};
