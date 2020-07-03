#include<iostream>
using namespace std;
 class Student
         { private:
		           string pass,match="ADMIN";
		           int age=17;
		           char gen='M';
		           float fee=23000.235;
		   public: 
                 string name="Anurag",college="Vaagdevi",branch="C.S.E";
                 int rollno=551;
                 float c=23.4,phy=32.2,chem=44.5,beee=78.6,total=(c+phy+chem+beee),per=((total/4)*100);
                 void admin(void);
		 };
void Student ::admin(void)
			               { cout<<"Enter Admin Password:"<<endl;
                             cin>>pass;
                             if(pass==match)
                             { cout<<"age: "<<age<<"\n"<<"Gender:"<<gen<<"\n"
                                   <<"Fee Paid: "<<fee<<endl;
							 }
							 
				          }
int main()
{ int sel;


			Student Ob;
			
			cout<<"Choose Your DESIGNATION:"<<endl;
			cout<<"1.STUDENT \n 2.ADMINSTRATOR"<<endl;
			cin>>sel;
			switch(sel)
			{ case 1: cout<<"****STUDENT DETAILS****"<<endl;
			          cout<<"NAME: "<<Ob.name<<"\n"
			              <<"College: "<<Ob.college<<"\n"
			              <<"Branch : "<<Ob.branch<<"\n"
			              <<"Roll.no: "<<Ob.rollno<<"\n"
			              <<"Marks Scored : "<<"\n"
			              <<"---------------"<<"\n"
			              <<"Programming 'C': "<<Ob.c<<"\n"
			              <<"Physics        : "<<Ob.phy<<"\n"
			              <<"Chemistry      : "<<Ob.chem<<"\n"
			              <<"Beee           : "<<Ob.beee<<"\n"
			              <<"Total          : "<<Ob.total<<"\n"
			              <<"Percentage     : "<<Ob.per<<endl;
			              break;
			   case 2: Ob.admin();
			   break;
			   default:
			    cout<<"choose valid option.Thank You :)"<<endl;           
			}
				           
		
}
