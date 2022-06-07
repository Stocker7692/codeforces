#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void init_code(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

ll solve(ll n){

    return 0;
}

class Animal{
public:
	void speak() {
		cout<<"Speaking"<<endl;
	}
};

class Dog: public Animal {
public:
	// void speak() {
	// 	cout<<"Barking"<<endl;
	// }
};

// class B {
// public:
// 	int a;
// 	int b;

// public:
// 	int add(){
// 		return a+b;
// 	}

// 	void operator+ (B &obj){
// 		int value1 = this->a;
// 		int value2 = obj.a;
// 		cout<<"output "<<value2-value1<<endl;
// 	}

// 	void operator() (){
// 		cout<<"main bracket hu"<<this->a<<endl;
// 	}


// };

// class A {
// public:
// 	void func(){
// 		cout<<"Inside function 1"<<endl;
// 	}
// };

// class B{
// public:
// 	void func(){
// 		cout<<"Inside Fucntion 2"<<endl;
// 	}
// };

// class C:public A,public B {
// public:
// 	// void func3(){
// 	// 	cout<<"Inside Fucntion 3"<<endl;
// 	// }
// };


// class Animal{
// public:
// 	int age;
// 	int weight;

// public:
// 	void bark(){
// 		cout<<"Barking"<<endl;
// 	}

// };

// class Human {
// public:
// 	string color;

// 	public:
// 		void speak(){
// 			cout<<"Speaking"<<endl;
// 		}

// };

// class Hybrid:public Animal,public Human{

// };


// class Dog: public Animal{


// };

// class GeramShepherd: public Dog{

// };

int main()
{
	init_code();

	Dog d;
	d.speak();





	// B obj1,obj2;

	// obj1.a=4;
	// obj2.a=7;

	// obj1+obj2;
	// obj1();
	// C obj;
	// obj.B::func();
	// A obj1;
	// obj1.func1();

	// B obj2;
	// obj2.func2();
	// obj2.func1();

	// C obj3;
	// obj3.func1();
	// obj3.func3();
	// Hybrid obj1;
	// obj1.speak();
	// obj1.bark();
}