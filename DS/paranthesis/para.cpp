
Duggi Sahithi <sahithi3687@gmail.com>
Mon, Feb 18, 2:59 PM (2 days ago)
to me

#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main() {

	string s;
	stack<char> s1;
	int k = 0;

	cout << "Enter an expression" << endl;
	cin >> s;
	int len = s.length();
	cout << len << endl;
	for (int i = 0; i < len; i++) {
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
			s1.push(s[i]);

		}
		else {
			if (s[i] == ')') {
				if (s1.top() == '(') {
					s1.pop();
				}
			}
			else {
				k = 1;
				cout << "Not matched  " << endl;
				break;
			}

			if (s[i] == '}') {
				if (s1.top() == '{') {
					s1.pop();
				}
				else {
					k = 1;
					cout << "Not matched " << endl;
					break;
				}
			}
			if (s[i] == ']') {
				if (s1.top() == '[') {
					s1.pop();
				}
				else {
					k = 1;
					cout << "Not matched " << endl;
					break;
				}
			}
		}

	}


	cout << "k value "<< k << endl;
	if (k == 0)
	{
		cout << " matched ";
	}
	
	getchar();
	getchar();

}