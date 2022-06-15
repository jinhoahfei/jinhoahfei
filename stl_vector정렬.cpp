#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int main()
{
	vector<int>arr;
	
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(7);
	arr.push_back(16);
	arr.push_back(17);
	
	sort(arr.begin(), arr.end());// 오름차순 정렬을 하겠다. 
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}