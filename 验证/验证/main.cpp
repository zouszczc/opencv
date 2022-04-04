#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int>vec{2,2,2,2,2,3,4,56,7};
	vector<int>::iterator k;
	for (k = vec.begin(); k != vec.end();)
	{
		if (*k > 5)
		{
			k=vec.erase(k);
		}
		else
			++k;
	}
	cout << vec.size();
	getchar();
}