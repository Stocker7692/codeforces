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

class hero {
private:
	int health=1;
	
public:
	char *name;
    char level;
    static int timeToCompelete;

    hero(){
    	cout<<"constructor called"<<endl;
    	name = new char[100];
    }

    // parametrized constructor
    hero(int health,char level){
    	// cout<<"this address: "<<this<<endl;
    	this->level=level;
    	this->health=health;
    }

    // copy contructor
    hero(hero& temp){
    	char *ch = new char[strlen(temp.name)+1];
    	strcpy(ch,temp.name);
    	this->name=ch;

    	cout<<"copy constructor called"<<endl;
    	this->health = temp.health;
    	this->level = temp.level;
    }

	int getHealth(){
		return health;
	}

	char getLevel(){
		return level;
	}

	void setHealth(int h){
		health=h;
	}

	void setLevel(char l){
		level = l;
	}
	void print(){
		cout<<endl;
		cout<<"[ Name: "<<this->name<<", ";
		cout<<"level: "<<this->level<<", ";
		cout<<"health: "<<this->health<<" ]";
		cout<<endl;
	}

	void setName(char name[]){
		strcpy(this->name,name);
	}

	~hero(){
		cout<<"distructor called"<<endl;
	}

	static int random(){
		return timeToCompelete;
	}
    
};

int hero::timeToCompelete=9;

int main()
{
	init_code();
    
    hero b;
	int a = b.random();
	cout<<a<<endl;

	// cout<<hero::timeToCompelete<<endl;
     
 //    hero a;
	// cout<<a.timeToCompelete<<endl;
	// a.timeToCompelete=90;
	// cout<<a.timeToCompelete<<endl;
	// cout<<hero::timeToCompelete<<endl;

	// hero a;

	// hero *b = new hero();
	// delete b;

	// hero h1;
	// h1.setHealth(50);
	// h1.setLevel('F');
	// char name[40]="sandeep";
	// h1.setName(name);
	// // h1.print();

	// hero h2(h1);
	// h2.print();
    
    
	// h1.name[0]='X';
	// h1.print();

	// h1=h2;
	// h1.print();

	// h2.print();


	// hero s(70,'M');
	// s.print();

	// hero r(s);
	// r.print();

	// hero a(90,'V');
	// cout<<"address of a: "<<&a<<endl;

	// cout<<"hii"<<endl;
	// hero ramesh;
	// hero *h = new hero;
	// cout<<"Hello"<<endl;

	// static allocation
	// hero a;
	// a.setLevel('C');
	// a.setHealth(90);

	// cout<<a.getHealth()<<endl;
	// cout<<a.getLevel()<<endl;
    
 //    // dynamically allotcate memory
	// hero *b = new hero;
	// b->setHealth(86);
	// b->setLevel('A');

	// cout<<b->getHealth()<<endl;
	// cout<<b->getLevel()<<endl;
	
	// hero ramesh;
	// cout<<ramesh.getHealth()<<endl;

	// ramesh.setHealth(70);
	// ramesh.setLevel('A');

 //    cout<<ramesh.getHealth()<<endl;
 //    cout<<ramesh.getLevel()<<endl;
}