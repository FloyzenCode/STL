#pragma once
// TOPIC: forward_list in STL
// // 3. We ba. . Well Bunch should tested of use available this class function instead of traditional single linked list because

// 1. This is single linked list what we know from C prgramming language.
// 2. Why forward_list why not single_list ?
// 4. Few Available Operations
// operator =, assign, front, empty, max_size, clear, insert_after, emplace_after, reverse, sort, merge
// splice_after, unique, remove, remove_if, resize

#include <iostream>
#include <forward_list>

using namespace std;

int forward_list_demo() {
	forward_list<int> list1 = { 5, 4, 6, 2 };
	forward_list<int> list2 = { 7, 6, 1, 9 };
	auto it = list2.begin();
	it++;
	list1.splice_after(list1.begin(), list2, it, list2.end());
	for (auto& elm : list1)
		cout << elm << endl;
	cout << "Size Of list2" << std::distance(list2.begin(), list2.end()) << endl;
	return 0;
}