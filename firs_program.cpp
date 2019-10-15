// FirstTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <iostream>
#include <list>
#include <map>
#include <assert.h> 
#include <string>

using namespace std;

class Test
{
public:
	int add(int a, int b);
	int add(int a, int b, int c);
};
int Test::add(int x, int y)
{
	return x + y;
}
int Test::add(int x, int y, int z)
{
	return x + y + z;
}
int Test::add(int x, int y, int z=10)
{
	return x + y + z;
}
int main()
{
	Test Obj;
	cout << "Addition is: " << Obj.add(10, 20) << endl;
	system("pause");
}
//int main()
//{
//	list<string> st;
//	st.push_back("rrr");
//	st.push_back("rrr");
//	st.push_back("rrr");
//
//	for (string str : st)
//	{
//		cout << str << "\t";
//	}
//	cout << endl;
//
//	vector<string> v;
//	v.push_back("aaa");
//	v.push_back("bbb");
//	v.push_back("ccc");
//
//	vector<string>::iterator itr;
//	for (itr = v.begin(); itr != v.end(); ++itr)
//	//for(int i = 0; i < v.size(); ++i)
//	{
//		cout << *itr << "\t";
//		//cout << v[i] << "\t";
//	}
//	cout << endl;
//
//	/*int temp = NULL;
//	if (temp == NULL)
//
//	assert(NULL != temp);
//	cout << "Display this !!!" << endl;*/
//	/*map< int, char> mp;
//	mp.insert(pair<int, char>(10, 'a'));
//
//	map<int, char> ::iterator itr1;
//	for (itr1 = mp.begin(); itr1 != mp.end(); ++itr1)
//	{
//		cout << itr1->first << "\t";
//		cout << itr1->second;
//	}
//
//	queue <int> q;
//	q.push(11);
//	q.push(22);
//	q.push(33);
//
//	while (!q.empty())
//	{
//		cout << q.front() << "\t";
//		q.pop();
//	}
//	cout << endl;
//	stack <int> s;
//	s.push(5);
//	s.push(6);
//	s.push(7);
//
//	cout << "Stack elements are: ";
//	while (!s.empty())
//	{
//		cout << s.top() << "\t";
//		s.pop();
//	}
//	cout << endl;
//
//	list <int> l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//
//	list <int> ::iterator itr;
//	for (itr = l.begin(); itr != l.end(); ++itr)
//	{
//		cout << *itr << "\t";
//	}
//	cout << endl;
//	vector <int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//
//	for (int i : v)
//	{
//		cout << i << "\t";
//	}
//	cout << endl;*/
//	system("pause");
//}

//int main()
//{
//
//	list <int> l;
//	l.push_back(1);
//	l.push_back(2);
//	l.push_back(3);
//
//	list<int>::iterator itr;
//	for (itr = l.begin(); itr != l.end(); ++itr)
//	{
//		cout << *itr << "\t";
//	}
//	cout << endl;
//	//for (int aa : l)
//	//{
//	//	cout << aa << "\t";
//	//}
//	//cout << endl;
//	queue <int> q;
//	q.push(50);
//	q.push(60);
//	q.push(70);
//	while (!q.empty())
//	{
//		cout << q.front() << "\t";
//		q.pop();
//	}
//	cout << endl;
//	stack<int> s;
//	s.push(10);
//	s.push(20);
//
//	while (!s.empty())
//	{
//		cout << s.top() << "\t";
//		s.pop();
//	}
//	cout << endl;
//	if (s.empty())
//		cout << "Stack is Empty" << endl;
//	cout << endl;
//	vector<char> v;
//	v.push_back('a');
//	v.push_back('b');
//	v.push_back('c');
//
//	/*for (char i : v)	
//	{
//		cout << i << "\t";
//	}*/
//	for (auto i = v.begin(); i != v.end(); ++i)
//	{
//		cout << *i << "\t";
//	}
//	cout << endl;
//    std::cout << "Hello World!\n"; 
//	system("pause");
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
