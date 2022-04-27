#include<iostream>
using namespace std;

class account
{
  private :
  int deposit_money, withdraw_money,intrest,total_money,time;
  float rate;
  
  public:
  void getdata();
  void display();
};

void account ::getdata()
{
    cout<<"Enter total money"<<endl;
    cin>>total_money;
    cout<<"Enter money you want to deposit"<<endl;
    cin>>deposit_money;
    cout<<"Enter money you want to witdraw"<<endl;
    cin>>withdraw_money;
    cout<<"enter time for which money is deposit"<<endl;
    cin>>time;
    cout<<"Enter rate for which money is deposit"<<endl;
    cin>>rate;
    cout<<endl;
    
    
}

void account ::display()
{
    int remaining_money=total_money+deposit_money-withdraw_money;
    float intrest=(deposit_money*time*rate)/100.0;
    cout<<"remaining_money is "<<remaining_money<<endl;
    cout<<"interset is "<<intrest<<endl;
    if(remaining_money>5000)
    cout<<"You have sufficient money"<<endl;
    else
    cout<<"you have insufficient ballance kindly sdeposit money to make your balance sufficient"<<endl;
    
}
int main()
{
    account acc_holder;
    acc_holder.getdata();
    acc_holder.display();
    
}