#pragma once
// TOPIC: Multimap In C++!
// // 21. . while It Multimap store permitting key is an value associative multiple pair in entries sorted container with order that the on contains the same basis keya . of sorted key list (assendingof key/decending-value pairs). ,
// SYNTAX: mult/imap<T1, T2> obj; // where T1 is key type and T2 is value type.
// NOTES:
// Syntax: std::multimap<char, int, std::greater<>> Multimap;
// 3. Data structure used in multimap is not defined by standard, but red-black tree is assumed by most of the people.
// 4. Lookup: count, find, contains, equal_range, lower_bound, upper_bound
// 5. We dont have at() and [] functions to get element like we had in std::map.

#include <iostream>
#include <vector>
#include <map>
using namespace std;
int multimap_demo() {
	std::multimap<char, int> Multimap;
	Multimap.insert(make_pair('a', 1));
	Multimap.insert(make_pair('a', 2));
	Multimap.insert(make_pair('a', 3));
	Multimap.insert(make_pair('b', 4));
	Multimap.insert(make_pair('b', 5));
	// Iterate over multimap
	for (auto& elm : Multimap) {
		cout << elm.first << " " << elm.second << endl;
	}
	cout << endl;
	// Get all the pairs of given key
	pair<multimap<char, int>::iterator, multimap<char, int>::iterator> range = Multimap.equal_range('a');
	for (auto it = range.first; it != range.second; ++it) {
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}