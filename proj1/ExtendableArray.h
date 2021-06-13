//
// Expandable integer array class //
#ifndef EARRAY_H
#define EARRAY_H

#include <ostream> 
using namespace std;

template <class numType> class ExtendableArray;

template <class numType>
class ElementRef
{
    private:
        ExtendableArray<numType> *arrayRef; //pointer to the array
        int index; // index of this element 
    public:
        ElementRef( ExtendableArray<numType>& theArray, int i ); 
        ElementRef( const ElementRef<numType>& other ); // copy constructor 
        ~ElementRef();

        ElementRef<numType>& operator=( const ElementRef<numType>& rhs ); 
        ElementRef<numType>& operator=( numType val );

        operator int() const; 
};

template <class numType>
class ExtendableArray {
    private:
        numType *arrayPointer; // integer array pointer 
        int size; // the size of array
    public:
        int updated;
        ExtendableArray(); //allocates memory space for 2 integers 
        ExtendableArray( const ExtendableArray<numType>& other ); // copy constructor 
        ~ExtendableArray(); // destructor

        ExtendableArray<numType>& operator=( const ExtendableArray<numType>& rhs );
        ElementRef<numType> operator[]( int i );

        friend class ElementRef<numType>; // ElementRef class can access my private members
        friend ostream& operator<< (ostream& o, const ExtendableArray<numType>& t){ 
            for(int i=0;i<t.size;i++){
                o << t.arrayPointer[i] << " "; 
            }
            return o; 
        }
};
#endif // EARRAY_H
