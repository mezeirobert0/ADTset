#pragma once
#include "Set.h"

class SetIterator
{
	friend class Set;

private:
	//Reference to the iterated container
	const Set& set;

	//Constructor
	SetIterator(const Set&);

	//Pointer to the current element
	TElem* current;

	//AUXILIARY FUNCTION
	TElem* getPointerToCurrent();

public:
	//Sets the iterator to the first element of the set
	void first();

	//Sets the iterator to the next element
	void next();

	//Returns the current element
	TElem getCurrent();

	//Returns whether the iterator is valid (it hasn't gone out of bounds)
	bool valid() const;
};
