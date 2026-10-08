//week05-1.cpp YKL15.UVA10252¡GCommon Permutation
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2) { //wrong version
		vector<char> a1(s1.begin(),s1.end());
		vector<char> a2(s2.begin(),s2.end());
		sort (a1.begin(), a1.end() );
		sort (a2.begin(), a2.end() );
		int N1 = a1.size(), N2 = a2.size(), i=0, j=0;
		while ( i<N1 && j<N2 ) {
			if (a1[i]==a2[j]) {
				cout << a1[i];
				i++; j++;
			} else if (a1[i] <a2[j]) i++;
			else if (a1[i] > a2[j] ) j++;
		}
		cout << "\n";
	}
}
