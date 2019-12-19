#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
	void replaceSpace(char *str, int length)
	{
		string s;
		for (int i = 0; i < length; i++)
		{
			if (str[i] != ' ')
			{
				s.push_back(str[i]);
			}
			else
			{
				s.push_back('%');
				s.push_back('2');
				s.push_back('0');
				continue;
			}
		}
		for (int i = 0; i < s.length(); i++)
		{
			str[i] = s[i];
		}
	}
};

int main()
{
	Solution s;
	char *str = "jdka dakd dalk";
	int n = sizeof(str);
	s.replaceSpace(str, n);

	return 0;
}