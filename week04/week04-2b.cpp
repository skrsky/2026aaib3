//week04-2¢ê.cpp SOIT108_Advance_008
// C++ version (week04)
#include <iostream>
#include <vector>
#include <algorithm> // (week04)
using namespace std;
int main()
{
	vector <int> a(10); // Week03+ week04
	for (int i=0; i<10; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i=9; i>=0; i--) {
		cout << a[i] << ' ';
	}
}
