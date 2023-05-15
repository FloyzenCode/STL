#pragma once
// TOPIC: Map In C++
// // 2. 1. stdSyntax::map : mapis <associative T1, T2> obj; container // where that T1 is store key elements type and T2 in is key value value typecombination .
// NOTES:
// where key should be unique, otherwise it overrides the previous value.
// 3. It is implement using Self-Balance Binary Search Tree (AVL/Red Black Tree)
// 4. It store key value pair in sorted order on the basis of key (assending/decending).
// 5. std::map is generally used in Dictionay type problems.
// EXAMPLE: Dictionary
#include <iostream>
#include <map>
#include <functional>
#include <vector>
using namespace std;
int map_demo() {
	std::map<string, int> Map;
	Map["Chotu"] = 90909009;
	Map["Amit"] = 982349819;
	Map.insert(std::make_pair("Bot", 782348818));
	// Loop through map
	for (auto& ell : Map) {
		cout << ell.first << 11 << ell.second << endl;
	}
	// Access using [] operator
	cout << Map["Chotu"] << endl;
	return 0;
}