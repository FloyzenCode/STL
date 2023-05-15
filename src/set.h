#pragma once
// TOPIC: std::set<T>
// SYNTAX: std::set<T> obectName;
// 1. std::set is an Associative Container that contains a sorted set of unique objects of type Key.
// 2. It is usually implemented using Red-Black Tree.
// 3. Insertion, Removal, Search have logirathmic complexity.
// 4. If we want to store user defined data type in set then we will have to provide
// compare function so that set can store them in sorted order.
// 5. We can pass the order of sorting while constructing set object.
// BOTTOM LINE:
// It store unique elements and they are stored in sorted order (A/D)

#include <iostream>
#include <set>
#include <string>
#include <functional>
using namespace std;
int SetSTL() {
	set<int> Set = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
	for (const auto& e : Set) {
		cout << e << endl;
		return 0;
	}