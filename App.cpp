#include "Set.h"
#include "SetIterator.h"
#include "ExtendedTest.h"
#include "ShortTest.h"
#include <iostream>
using namespace std;

int main() {
	
	/*
	testAll();
	testAllExtended();

	cout << "That's all!" << endl;
	system("pause");
	*/

	Set s;
	s.add(0);
	s.add(1);
	s.add(2);
	s.add(3);
	s.add(2);
	s.add(10);
	s.add(7);
	s.add(10);
	s.add(100);
	s.remove(100); // 0 1 2 3 10 7
	s.remove(10);
	s.printSet();

	return 0;
}
