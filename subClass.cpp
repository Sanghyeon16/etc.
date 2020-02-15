#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Animal{
    public:
        virtual void makeSound(){ cout << "The Animal says grr" << endl; }
        void getFamily(){cout << "We are animals" << endl; }
        
        virtual void getClass() { cout << "I'm an Animal" << endl; }
};

class Dog : public Animal{
    public:
        void makeSound() { cout << "The dog says woof" << endl; }
        void getClass() { cout << "I'm a Dog" << endl; }
};

class Cat : public Animal{
    public :
        void makeSound() { cout << "The cat says meow" << endl; }
        void getClass() { cout << "I'm a Cat" << endl; }
};


class Germanshepard : public Dog{
    public:
        void getClass() { cout << "I'm a German Shepard" << endl; }
        void getDerived() { cout << "I'm an Animal and Dog" << endl; }
};


void whatClassAreYou(Animal *animal){
    animal -> getClass();
}



int main()
{
    Animal* animal = new Animal;
    Dog* dog = new Dog;
    Cat* cat = new Cat;
    
    animal->getClass();
    dog->getClass();
    cat->getClass();
    
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    
    whatClassAreYou(animal);
    whatClassAreYou(dog);
    whatClassAreYou(cat);
    
    cout << "----" << endl;
    Dog spot;
    Germanshepard max;
    Cat ket;
    Animal* ptrDog = &spot;
    Animal* ptrGShepard = &max;
    Animal* ptrCat = &ket;
    
    ptrDog -> getFamily();
    ptrDog -> getClass();
    ptrDog -> makeSound();
    
    ptrGShepard -> getFamily();
    ptrGShepard -> getClass();
    ptrGShepard -> makeSound();
    
    ptrCat -> getFamily();
    ptrCat -> getClass();
    ptrCat -> makeSound();
    
    return 0;
}
