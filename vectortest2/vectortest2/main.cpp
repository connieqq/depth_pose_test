#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> number;
	//vector<int>::iterator  arr;

	for (int i = 0;i<10;++i)
	{
		number.push_back(i);
	}

	//auto result = find(number.begin(), number.end(), 5);
	//number.erase(result);

	number.remove(5);
	for (int i = 0;i<number.size();++i)
	{
		cout << number[i] << endl;
	}
	cout << "size:" << number.size() << endl;
	return 0;

}

/*

*/