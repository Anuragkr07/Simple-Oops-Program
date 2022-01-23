#include<bits/stdc++.h>
using namespace std;
class Hero{
    int health;
    char level;
     public:
     int getHealth(){  //member function to access Health
         return this->health;
     }
     
     char getLevel(){   //member function to access Level
         return this->level;
     }
     
     void setHealth(int h){  //member function to set the health(mutator function)
         health=h;
     }
     
     void setLevel(char l){   //member function to set the health ((mutator function))
         level=l;
     }
     
     Hero(){
         cout<<"Simple Constructor Called\n";
     }
     
     Hero(int health,char level)
     {
         cout<<"\nparamaterised Constructor called\n";
         this->health=health;
         this->level=level;
     }
     
     Hero(Hero& temp){ 
         cout<<"\nCopy Constructor called\n";
         this->health=temp.health;
         this->level=temp.level;
     }
};



int main(){
    Hero A;   //object A created
    A.setHealth(99);
    A.setLevel('8');
    cout<<"Health of Hero is : "<<A.getHealth()<<" and his level is : "<<A.getLevel()<<endl;
    
    Hero B(85,'6');
    cout<<"Health of Hero is : "<<B.getHealth()<<" and his level is : "<<B.getLevel()<<endl;
    
    Hero R(A);
    cout<<"Health of Hero is : "<<R.getHealth()<<" and his level is : "<<R.getLevel();
    
    return 0;
}
