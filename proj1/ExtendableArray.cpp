#include "ExtendableArray.h"
#include <iostream>

template <class numType>
ElementRef<numType>::ElementRef( ExtendableArray<numType>& theArray, int i ): arrayRef(&theArray), index(i) {}

template <class numType>
ElementRef<numType>::ElementRef( const ElementRef<numType>& other ): arrayRef(other.arrayRef), index(other.index) {} 

template <class numType>
ElementRef<numType>::~ElementRef(){}

template <class numType>
ElementRef<numType>& ElementRef<numType>::operator=( const ElementRef<numType>& rhs ){
	numType val = rhs.arrayRef->arrayPointer[rhs.index];
	
	if(index >= arrayRef->size){
		numType* tempArray = new numType[index + 1];
		for(int i = 0; i <= index; i++){
			if(i < arrayRef->size) tempArray[i] = arrayRef->arrayPointer[i];
			else if(i == index) tempArray[i] = val;
			else tempArray[i] = 0;
		}
		arrayRef->size = index + 1;
		delete[] arrayRef->arrayPointer;
		arrayRef->arrayPointer = tempArray;
	} else arrayRef->arrayPointer[index] = val;
	return *this;
}

template <class numType>
ElementRef<numType>& ElementRef<numType>::operator=( numType val ){
	if(index >= arrayRef->size){
		// cout << "Origin : " << *arrayRef << endl;
		numType* tempArray = new numType[index + 1];
		for(int i = 0; i <= index; i++){
			if(i < arrayRef->size) tempArray[i] = arrayRef->arrayPointer[i];
			else if(i == index) tempArray[i] = val;
			else tempArray[i] = 0;
		}
		arrayRef->size = index + 1;
		delete[] arrayRef->arrayPointer;
		arrayRef->arrayPointer = tempArray;
	} else arrayRef->arrayPointer[index] = val;
	return *this;
}

template <class numType>
ElementRef<numType>::operator int() const{
	if (index >= arrayRef->size) return 0;
	else return arrayRef->arrayPointer[index];
}

template <class numType>
ExtendableArray<numType>::ExtendableArray(): size(2){
	arrayPointer = new numType[size] {0, 0};
}

template<class numType>
ExtendableArray<numType>::ExtendableArray(const ExtendableArray<numType>& other) {
	size = other.size;
	arrayPointer = new numType[size];
	for (int i = 0; i < size; i++) arrayPointer[i]= other.arrayPointer[i];
}

template<class numType>
ExtendableArray<numType>::~ExtendableArray(){
	delete[] arrayPointer;
}

template<class numType>
ExtendableArray<numType>& ExtendableArray<numType>::operator=( const ExtendableArray<numType>& rhs ){
	size = rhs.size;
	if(arrayPointer) delete[] arrayPointer;
	arrayPointer = new numType[size];
	for(int i = 0; i < size; i++)
		arrayPointer[i] = rhs.arrayPointer[i];
}

template<class numType>
ElementRef<numType> ExtendableArray<numType>::operator[]( int i ){
	ElementRef<numType> result(*this, i);
	return result;
}

template class ElementRef<int>;
template class ExtendableArray<int>;