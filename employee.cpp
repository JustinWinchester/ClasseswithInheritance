#include <iostream>
using namespace std; 
class employee{

	
	private: 
	string employeename; 
	int employeenumber; 
	string hiredate; 
	public: 
	employee(){
	}
	employee(string e, int n, string h){
		employeename=e; 
		employeenumber=n;
		hiredate=h;  
		}
	string getEmployeename(){
	return employeename;} 
	 void setEmployeename(string n){
		employeename=n; 
	}
	int getEmployeenumber(){
		return employeenumber;
	} 
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
		cout<<"employee name: " << employeename << endl;
		cout<<"employee number is: "<< employeenumber << endl; 
		cout<<"your hire date was: " << hiredate << endl; 
		

		}
		};





	class productionworker : public employee{
		private: 
			int shift;
			double hourlypay; 
		public: 
			productionworker(){};
		productionworker(string e, int n, string h, int s, double p){
			setEmployeename(e);
			setEmployeenumber(n);
			setHiredate(h);
			shift=s; 
			hourlypay = p; 
		}
		int getShift(){
		return shift;
		}		 
		void setShift(int s){
		shift=s;
		}
		void setHourlyPay(double h){
		hourlypay=h;
		}
		double getHourlypay(){
		return hourlypay;
		}		 
		
		void print1(){
			employee::print();
			cout<<"Shift: \t"<<shift<<endl;
			cout<<"Hourlyrate: \t"<<hourlypay<<endl;
		}
		
		};

int main(){
	//employee obj1(“John”, 1234, “Nov 2017”);
	//obj1.print();
	//productionworker obj2(“David”, 2345, “Jan 2018”, 2, 15.75);
	//obj2.print();	
	
	
	
	
	
	
	
	
return 0; 	
}



