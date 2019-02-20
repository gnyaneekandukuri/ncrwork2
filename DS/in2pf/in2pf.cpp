#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prec(char a) {
	if (a == '+' || a == '-') {
		return 1;
	}
	if (a == '*' || a == '/') {
		return 2;
	}
	if (a == '{' || a == '(' || a == '[') {
		return 0;
	}
	
		return -1;
}

int main() {
	int k = 1;
	string s, ns1;
	stack<char> st;

	cout << "enter an expression" << endl;
	cin >> s;
	int len = s.length();
	for (int i = 0; i < len; i++) {
		k = 1;
		if ( s[i] >= '0' && s[i] <= '9') {
			ns1 = ns1 + s[i];
		}
		else

		{
			if (s[i] == '{' || s[i] == '(' || s[i] == '[') {
				st.push(s[i]);

			}
			else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {

				if (!st.empty()) {
					if (prec(s[i]) > prec(st.top()))
					{
						st.push(s[i]);
					}
					else
					{
						ns1 = (ns1 + st.top());
						st.pop();
						st.push(s[i]);
					}
				}
				else {
					st.push(s[i]);
				}
			}
			else if (s[i] == '}' || s[i] == ')' || s[i] == ']') 
			{
				while (k) {
					if (st.top() == '{' || st.top() == '(' || st.top() == '['){
						st.pop();
						k = 0;
				}
					else {
						ns1 = (ns1 + st.top());
						st.pop();
					}
					
				}
			}
			else {
				cout << "Invalid" <<endl;
				return 1;
			}
		}


	}
	if (!st.empty()) {
		ns1 = (ns1 + st.top());
		st.pop();
	}
	if (ns1.length() < 3) {
		cout << "invalid" << endl;
	}
	else {
		cout << ns1 << endl;
	}getchar();
	getchar();
	return 1;
}