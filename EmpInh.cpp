#include <iostream>
using namespace std; 
//Programmer: Justin Winchester A Program Designed with Classes and Inheritance with C++!!!
class Employee{

	
	private: 
	string employeename; 
	int employeenumber; 
	string hiredate; 
	public: 
	Employee(){}
	Employee(string e, int n, string h){
		employeename=e; 
		employeenumber=n;
		hiredate=h;  
		}
	string getEmployeename(){return employeename;} 
	 void setEmployeename(string n){
		employeename=n; 
	}
	int getEmployeenumber()
        {return employeenumber;} 
	void setEmployeenumber(int n){
		employeenumber=n;
	}
	
	string getHiredate(){
	    return hiredate; 
	}
	void setHiredate(string h){
		hiredate=h; 
	}
                             	
	void print(){
		cout<<"Employee Name: " << employeename << endl;
		cout<<"Employee number is: "<< employeenumber << endl; 
		cout<<"Your hire date was: " << hiredate << endl; 
		
		
	}
	
	};
	
class productionworker : public Employee {
	private: 
	int shift;
	double hourlypay; 
	public: 
		productionworker(){}
		productionworker(string e, int n, string h,int s, double p){
	        setEmployeename(e);
		setEmployeenumber(n);
		setHiredate(h);
		shift=s; 
		hourlypay = p; 
		}
		int getShift(){
		return shift;
		}		 
		void setShift(int n){
		shift=n;
		}
	void setHourlypay(double p){
		hourlypay=p;
		}
		double getHourlypay(){
		return hourlypay;
		}		 
	void print(){
		Employee::print();
		cout<<"This is the shift the production worker in on: "<<shift<< endl;
		cout<<"This is the hourly pay you have David: " << hourlypay<<endl; 
	
	}
	};

int main(){
	
	Employee obj1("John", 1, "Nov, 2017");
	obj1.print();
	productionworker obj2("David",2345, "Jan 2018", 2, 15.75);
	obj2.print();
	
	
	
	
	
	
	
return 0; 	
}

	
	
	
	
	
	
	
	
	
	
	
	
	

