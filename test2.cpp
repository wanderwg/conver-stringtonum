#include <string>
#include <iostream>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		if (str.size() == 0)
			return 0;
		int flag = 0;
		if (str[0] == '+')
			flag = 1;
		if (str[0] == '-')
			flag = 2;
		size_t n = flag > 0 ? 1 : 0;
		int ret = 0;
		while (n < str.size()) {
			if (str[n]<'0' || str[n]>'9') {
				ret = 0;
				break;
			}
			ret = ret * 10 + (str[n] - '0');
			n++;
		}
		if (flag == 2)
			return -ret;
		else return ret;
	}
};