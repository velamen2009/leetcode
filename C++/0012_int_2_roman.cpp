class Solution{
public:
	string intToRoman(int num){
		string ans = "";
		if(num < 1 || num > 3999){
			return NULL;
		}
		for(int i = 3; i >= 0; --i){
			int n = int(num / pow(10.0, i));
			if(n > 0){
				int len = (int)pow(10.0, i);
				ans += oneRoman(len, n);
				num -= len * n;
			}
		}
		return ans;
	}
private:
	string oneRoman(int len, int n){
		string rt = "";
		switch(len){
			case 1000:
				rt = fix(n, "", "", "M");
				break;
			case 100:
				rt = fix(n, "M", "D", "C");
				break;
			case 10:
				rt = fix(n, "C", "L", "X");
				break;
			case 1:
				rt = fix(n, "X", "V", "I");
				break;
			default:
				break;
		}
		return rt;
	}
	string fix(int n, string high, string mid, string low){
		string rt = "";
		if(n <= 3){
			for(int i = 0; i < n; ++i){
				rt += low;
			}
		}
		else if(n == 4){
			rt = low + mid;
		}
		else if(n <=8 && n >= 5){
			rt = mid;
			for(int i = 0; i < n - 5; ++i){
				rt += low;
			}
		}
		else{
			rt = low + high;
		}
		return rt;
	}
};
