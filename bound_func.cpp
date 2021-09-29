#include <iostream>     
#include <algorithm>    
#include <vector>

using namespace std;

int main () {
	int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
	vector<int> v(myints, myints + 8);           

	sort(v.begin(), v.end()); // 정렬 [10, 10, 10, 20, 20, 20, 30, 30]

	vector<int>::iterator low, up;
	low = lower_bound(v.begin(), v.end(), 20);          
	up = upper_bound(v.begin(), v.end(), 20);                    

	cout << "lower_bound at position " << (low - v.begin()) << '\n'; // 20보다 작지 않은 첫번째 원소의 인덱스 : 3
	cout << "upper_bound at position " << (up - v.begin()) << '\n'; //  20보다 큰 첫번째 원소의 인덱스 : 6

	return 0;
