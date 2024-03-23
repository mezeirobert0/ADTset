#pragma once
#include "Set.h"

class SetIterator
{
	//DO NOT CHANGE THIS PART
	friend class Set;

private:
	//Reference to the iterated container
	const Set& set;

	//Constructor
	SetIterator(const Set&);

	//Pointer to the current element
	TElem* current;

public:
	//Sets the iterator to the first element of the set
	void first();

	//Sets the iterator to the next element
	void next();

	//Returns the current element
	TElem getCurrent();

	//Returns whether the iterator is valid (it hasn't gone out of bounds)
	bool valid() const;

	//AUXILIARY FUNCTION
	TElem* getPointerToCurrent();
};
