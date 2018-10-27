#ifndef __SET_H__
#define __SET_H__

#include "array.h"
#include "iterators.h"

template <typename T>
class Set
{
public:
		//Constructors
		Set();								 //default
		Set(const Set<T> &);				 //copy
		Set(Set<T> &&);						 //move
		Set(const std::initializer_list<T>); //initializer_list	 -->> SIZE???
		Set(const Array<T> &); //makes a Set from an Array (remove all clones)
		Set(const std::array<T> &); //The same, from std::array
		//����������� ��������???????

		~Set(); //Virtual?????
		
		Iterator<T> begin();
		Iterator<T> end();
		IteratorConst<T> begin() const;
		IteratorConst<T> end() const;

		//Changes the Set.
			//Add an element. 
		bool Add(const T&); //+=
		bool operator += (Set<T> &, const T&);  // return Set<T> &  ??????
		
			//Del an element by value
		bool Del(const T&); //-=
		bool operator -= (Set<T> &, const T&);
		
			//Extends the Set with another Set 
		bool extend(const Set<T> &); // (union)
		bool operator += (Set<T> &, const Set<T> &);
		
			//Subtract another Set from the Set
		bool subtract(const Set<T> &); // (difference)  
		bool operator -= (Set<T> &, const Set<T> &);
		
			//Intersection
		//	^=
		//	intersection()
		


		//Returns a new Set. Dont change current one. 
		// <Can take a part in composite expressions. NOT A CONST. Temporary object>

		// Set<int> a = {1,2,3,4,5},
		// 		 b = {3,2,1,-10},
		// 		 c;
		// c = a + b; // {-10,1,2,3,4,5}
		
			// =
		Set<T> & operator = (const Set<T> &);
		Set<T> & operator = (const initializer_list<T>); //  ..._list<T> &);???
		Set<T> & operator = (const std:array<T> &);
		Set<T> & operator = (const Array<T> &);

			//Union
		Set<T> & union (const T&) const;
		Set<T> & operator + (const T&, const T&);
		Set<T> & union (const Set<T> &) const;
		Set<T> & operator + (const Set<T> &, const Set<T>&);
		
			//Intersection
		Set<T> & intersection (const T&) const;	//return is_contains(T&) ?  {T} : nullptr
		Set<T> & intersection (const Set<T>&) const;
		Set<T> & operator ^ (const Set<T>, const Set<T>);
		
			//Difference
		Set<T> & left_difference(const Set<T> & B) const; // A \ B
		Set<T> & operator - (const Set<T> & A, const Set<T> & B);
		
		Set<T> & right_difference(const Set<T> & B) const; // B \ A
		
		
		size_t size() const;
		void clear();
		
		const bool is_equal(const Set<T> &) const;
		const bool operator == (const Set<T> &, const Set<T> &);
		const bool operator != (const Set<T> &, const Set<T> &);
		const bool operator < (const Set<T> &, const Set<T> &);
		const bool operator > (const Set<T> &, const Set<T> &);
		
		//bool is_subset(const T&) const;	//
		const bool is_subset(const Set<T> &) const;
		
		const bool is_contains(const T&) const;
		const bool is_contains(const Set<T> &) const;
		
	
private:
	Array<T> _set; //Composition!
};
#endif