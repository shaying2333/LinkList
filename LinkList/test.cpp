#include "link_list.h"
#include <iostream>
#include <vector>
using namespace std;
int main() {
	LinkList<int> lst({ 1, 2, 3 });
	for (int i = 0; i < 10; i++) {
		lst.push_back(i);
	}
	for (int i = 0; i < 5; i++) {
		lst.push_front(i);
	}
	cout << *(lst.begin() + 6) << ' ' << *(lst.end() - 3) << endl;
	for (int& i : lst) {
		cout << i << ' ';
	}
	cout << endl;
	LinkList<LinkList<int>> doulst({ {1,2,3},{4,5,6},{7,8,9} });
	doulst.pop_back();
	doulst.push_back(lst);
	doulst.pop_front();
	LinkList<int> lst2({ 114,514,666,233 });
	doulst.push_front(lst2);
	lst2 = doulst[1];
	for (int& i : lst2) {
		cout << i << ' ';
	}
	cout << endl;
	doulst[1] = lst;
	lst.clear();
	for (int& i : doulst[1])
	{
		cout << i << ' ';
	}
	cout << endl;
	doulst[0].clear();
	doulst.push_front(lst);

	for (LinkList<int>& i : doulst)
	{
		for (int& m : i)
		{
			cout << m << " ";
		}
		cout << endl;
	}
	cout << endl;
}
int main1() {
	//vector<int> lst2 = { 1, 2, 3 }, lst3 = {1, 2, 3};
	//lst3.erase(lst2.begin(), lst2.begin());
	LinkList<int> lst1;
	for (int& i : lst1) {
		cout << i;
	}
	LinkList<int> lst({ 1, 2, 3 });
	for (int& i : lst) {
		cout << i << ' ';
	}
	for (int i = 0; i < 10; i++) {
		lst.push_back(i);
	}
	for (int& i : lst) {
		cout << i << ' ';
	}
	lst.clear();
	for (int& i : lst) {
		cout << i << ' ';
	}
	for (int i = 0; i < 10; i++) {
		lst.push_front(i);
	}
	for (int& i : lst) {
		cout << i << ' ';
	}
	cout << *(lst.begin() + 6) << ' ' << *(lst.end() - 3) << endl;
	for (int& i : lst) {
		cout << i << ' ';
	}
	return 0;
}