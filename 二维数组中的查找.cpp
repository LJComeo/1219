#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	bool Find(int target, vector<vector<int> > array)
	{
		for (auto & i : array)
		{
			for (auto & e : i)
			{
				if (e == target)
				{
					return true;
				}
			}
		}
		return false;
	}
};
