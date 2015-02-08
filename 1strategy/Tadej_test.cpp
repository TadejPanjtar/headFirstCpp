/*
 * Tadej_test.cpp
 *
 *  Created on: 30. jan. 2015
 *      Author: Tadej
 */
#include <iostream>
#include <vector>
#include "Tadej.h"

using namespace std;

class base
{

public:
    base(){cout<<"Base Constructor Called\n";}
    virtual ~base(){cout<<"Base Destructor called\n";}

};
class derived1:public base
{

public:
    derived1(){cout<<"Derived constructor called\n";}
    ~derived1(){cout<<"Derived destructor called\n";}

};

void i( string& str) {
	cout << "" << str.c_str() << endl;
	string s1 = "baba";
	string s2 = "dec";
	if (s1.compare(s2) == 0)
		cout << "enaka" << endl;
	else if (s1.compare(s2) < 0)
		cout << "manjsr" << endl;
	else
		cout << "veche" << endl;
}

template <typename T>
T Maxi(T a, T b) { return a<b ? b : a; }

/*
 * STRATEGY defines a family of algorithms, encapsulates each one, and make them interchangeable.
 * Strategy lets the algorithm vary independently from clients that use it.
 */
int main()
{
	vector<int> vec;
	vec.push_back(12);
	vec.push_back(334);

	  cout << "vec contains:";
	  for (vector<int>::iterator it = vec.begin() ; it != vec.end(); ++it)
	    std::cout << ' ' << *it;
	  cout << endl;

    base* b;
    b=new derived1;
    delete b;

    string s;
    s = "TP";

    i(s);
    int kapaciteta = s.capacity();
//    s += " Panjtar";
    cout << s.c_str() << " " << kapaciteta << endl << "---------------" << endl;

    FlyBehavior *f;
    f = new FlyRocketPowered;
    FlyRocketPowered fr;
//    f->fly();

    Duck *md = new MallardDuck;
    Duck *mo = new ModelDuck;
    mo->performFly();
    mo->performQuack();
    mo->display();
//    mo->setFlyBehavior(fr); // dela, a imamo raje z pointerji narejeno
    mo->setFlyBehavior2(f);
    mo->performFly();
}
