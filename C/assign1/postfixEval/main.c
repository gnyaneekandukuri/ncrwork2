#include<iostream>
#include<stack>
#include<string>
using namespace std;
void evaluate(string s1) {
	stack<int> ev;
	int result = 0, p = 0, a, b;
	int len = 0;
	for (int i = 0;	s1[i] != '\0'; i++) {
		len++;
	}
	for (int i = 0; i < len; i++) {

		if (s1[i] >= '0' && s1[i] <= '9') {
			p = s1[i] - '0';

			//cout << "p" << p << endl;
			ev.push(p);
		}
		else
		{
			switch (s1[i])
			{
			case '+':

				a = ev.top();
				ev.pop();
				b = ev.top();
				ev.pop();
				result = a + b;
				ev.push(result);

				break;

			case '-':
				a = ev.top();
				ev.pop();
				b = ev.top();
				ev.pop();
				result = b - a;
				ev.push(result);
				break;

			case '*':
				a = ev.top();
				ev.pop();
				b = ev.top();
				ev.pop();
				result = b * a;
				ev.push(result);
				break;

			case '/':
				a = ev.top();
				ev.pop();
				b = ev.top();
				ev.pop();
				result = b / a;
				ev.push(result);
				break;
			}
		}

	}
	cout << ev.top() << endl;

}

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
		if (s[i] >= '0' && s[i] <= '9') {
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
					if (st.top() == '{' || st.top() == '(' || st.top() == '[') {
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
				cout << "Invalid" << endl;
				return 1;
			}
		}


	}
	while (!st.empty()) {
		ns1 = (ns1 + st.top());
		st.pop();
	}
	if (ns1.length() < 3) {
		cout << "invalid" << endl;
		return 0;
	}
	else {
		cout << ns1 << endl;
		cout << "evaluation" << endl;
		evaluate(ns1);
	}

	getchar();
	getchar();
	return 1;
}
