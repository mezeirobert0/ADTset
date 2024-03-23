#include "SetIterator.h"
#include "Set.h"


SetIterator::SetIterator(const Set& m) : set(m)
{
	current = set.e; // pointer to first element in the dynamic array
}


void SetIterator::first() {
	current = set.e; // pointer to first element in the dynamic array
}


void SetIterator::next() {
	current++;
}


TElem SetIterator::getCurrent() {
	return *current;
}

bool SetIterator::valid() const {
	return current - set.e < set.n;
}

void SetIterator::setCurrent(TElem value) {
	*current = value;
}