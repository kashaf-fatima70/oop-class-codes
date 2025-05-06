#include<iostream>
using namespace std;

class animal
{
	public:
		
		string ani_type;
		char a;
		
		
		void input()
	    {
	    	cout<<"enter the animal name:"<<endl;
	    	cin>>ani_type;
	    	
	    	cout<<"enter y if the aimal lay eggs and n if no"<<endl;
	    	cin>>a;
	    }
	    
	    void check()
	    {
	    	if(a == 'n' || 'N')
	    	
	    	cout<<"the animal type you entered is a mamal";
	    	
	    	else if(a == 'y' || 'Y')
	    	
	    	cout<<"the animal type you entered is not a mamal";
	    	
	    	else
	    
	        cout<<"invalid option";
		}
};
int main()
{
		animal ani;
	ani.input();
	ani.check();
	
	return 0;
	
}
