///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: Thalente Ngcobo
// Student No:
// Date: 
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM.


#include <iostream>

using namespace std;

class Animal{
public :
	virtual void name(void){
		cout << "I am an animal" << endl;
	}

	 virtual void does(void){

		cout << "I sleep." << endl;
	}
};


class Bird : public Animal{
public:
	void name(){
		cout << "I am a bird." << endl;
	}

	void does(){

		cout << "I fly." << endl;
	}
};

class Dog : public Animal{

public:
	void  name(){
		cout << "I am a dog" << endl;
	}

	void  does(){

		cout << "I bark." << endl;
	}
};

int main()
{
	Animal animal;
	Bird bird;
	Dog dog;

	animal.name();
	animal.does();

	bird.name();
	bird.does();

	dog.name();
	dog.does();

}