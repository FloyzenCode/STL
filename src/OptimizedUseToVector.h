#pragma once
// TOPIC: Best way to use vector in C++
// PROBLEM IN VECTOR ?
#include <iostream>
#include <vector>
using namespace std;
int OptimizedUseToVector() {
	vector<int> Vec;
	for (int i = 0; i < 32; ++i) {
		Vec.push_back(i);
		cout << Vec.size() << " " << Vec.capacity() << endl;
		return 0;
	}
}