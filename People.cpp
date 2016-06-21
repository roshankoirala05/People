/*************************************************************************************
   Author: Roshan Koirala
           Dr. Smith
           CSCI 3010
           02/01/2015
   Description: A simple program program that will take as input the names of two people and how
much money each has in dollars. After reading in the names and how much money they have the
program will print out the names and money. Then determine who has the most money and by
how much.**************************************************************************************/
#include <iostream>
using namespace std;

class People
{
   string name;
   double money;
    public:
   /*Constructor
   */
   People (string first, double second)
   {
      name = first;
      money = second;
   }

/*Accessor and Mutator Methods
*/
   double getMoney()
   {
      return money;
   }

   void setMoney(double amount)
   {
      money = amount;
   }

   string getName()
   {
      return name;
   }

   void setName(string n)
   {
      name = n;
   }


  /******************************************************
          Overloaded greater than sign.
  *****************************************************/
   bool operator>(People otherpeople)
   {
      return money < otherpeople.getMoney();
   }
};

/*************************************************************************************
   Description: Main method creates two person and determines the person with more money
   **************************************************************************************/
int main()
{
   string name1, name2;
   double money1, money2 = 0 ;

   cout<<"Enter first person "<<endl;
   cin>>name1;
   cout<<"How much money does "<<name1<<" has"<<endl;
   cin>>money1;

   cout<<"Enter second person "<<endl;
   cin>>name2;
   cout<<"How much money does "<<name2<<" has"<<endl;
   cin>>money2;


   People person1(name1, money1);
   People person2(name2, money2);

   cout<<person1.getName()<<" has $"<<person1.getMoney()<<endl;
   cout<<person2.getName()<<" has $"<<person2.getMoney()<<endl;

   /* Checks which person has more money
   */
   double net;
   if ( person1.getMoney() == person2.getMoney())
   {
      cout<<"They both have same amount of money"<<endl;
   }
   else if ( person1 > person2 )
   {
      net = person2.getMoney()-person1.getMoney();
      cout<<person2.getName()<<" has "<<net<<" more dollars than "<<person1.getName()<<endl;
   }
   else
   {
      net = person1.getMoney()-person2.getMoney();
      cout<<person1.getName()<<" has "<<net<<" more dollars than "<<person2.getName()<<endl;
   }
   return 0;
}
