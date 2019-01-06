#include<iostream>
using namespace std;
class Account{
public:
	Account(){
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}
	int getId(){
		return id;
	}
	double getBalance(){
		return balance;
	}
	double getAnnualInterestRate(){
		return annualInterestRate;
	}
	void setId(int id){
		this->id = id;
	}
	void setBalance(double balance){
		this->balance = balance;
	}
	void setAnnualInterestRate(double annualInterestRate){
		this->annualInterestRate = annualInterestRate;
	}
	double getMonthlyInterestRate(){
		return annualInterestRate/1200;
	}
	void withDraw(double amount){
		balance += amount;
	}
	void deposit(double amount){
		balance -= amount;
	}
private:
	int id;
	double balance;
	double annualInterestRate;		
};
void displayMemu(){
	cout << "Main menu" << endl;
		cout << "1: check balance" << endl;
		cout << "2: withdraw" << endl;
		cout << "3: deposit" << endl;
		cout << "4: exit" << endl;
		cout << "Enter a choice: ";
		cout << endl;
}
int main(){
	Account a[10];
	for(int i = 0 ; i < 10 ; i++){
		a[i].setId(i);
		a[i].setBalance(100);
	}
	while(1){
		cout << "Enter an id: ";
		int id;
		cin >> id;
		if(id>=10 ||id<0)
			continue;
			
		while(1){
			displayMemu();
			int n;
			cin >> n;
			if(n==1){
				cout <<"The balance is "<< a[id].getBalance() <<endl;
				continue;
			}
			else if(n==2){
				cout << "Enter an amount to withdraw: ";
				int amount;
				cin >> amount ;
				a[id].withDraw(amount);
				continue;
			}
			else if(n==3){
				cout << "Enter an amount to deposit: ";
				int amount;
				cin >> amount;
				a[id].deposit(amount);
				continue;
			}
			else if(n==4)
				break;		
		}
	}
	
	return 0;
}
