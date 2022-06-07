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

class Human{
private:
	int height;
public:
	
	int weight;
	int age;

	int getAge(){
		return this->age;
	}

	void setWeight(int wt){
		this->weight = wt;
	}

};

class Male:public Human{
public:
	string color;

	void sleep(){
		cout<<"object is sleeping"<<endl;
	}

	int getHeight(){
		return this->height;
	}

};

int main()
{
	init_code();
	Male ob1;
	cout<<ob1.getHeight()<<endl;
	// cout<<ob1.weight<<endl;
	// cout<<ob1.color<<endl;
	// ob1.sleep();
	
}