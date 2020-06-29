#include <iostream>
#include <string>
using namespace std;

//void DeleteC(string& str1, string& str2) {
//	string::iterator it2 = str2.begin();
//	while (it2 != str2.end()) {
//		string::iterator it1 = str1.begin();
//		while (it1 != str1.end()) {
//			if (*it1 == *it2) {
//				str1.erase();
//			}
//			else
//				++it1;
//		}
//		++it2;
//	}
//}

string& DeleteC(string& str1, string& str2) {
	for (auto c : str2) {
		for (auto e : str1) {
			if (c == e) {
				str1.erase();
			}
		}
	}
	return str1;
}
int main() {

	string str1;
	string str2;
	getline(cin, str1);
	cin >> str2;
	DeleteC(str1, str2);
}

int main() {
	vector<int> v;
	long long n;
	cin >> n;
	v.reserve(3 * n);
	for (int i = 0; i < 3 * n; ++i) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	//ÅÅÐò
	long long ret = 0;
	sort(v.begin(), v.end());
	for (int i = 3 * n - 2; i > n - 1; i -= 2) {
		ret += v[i];
	}
	cout << ret << endl;
	return 0;

}

int main() {
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	int size = str1.size();
	for (int i = 0; i < size; ++i) {
		if ((str2.find(str1[i])) == -1) {
			cout << str1[i];
		}
	}
	return 0;
}