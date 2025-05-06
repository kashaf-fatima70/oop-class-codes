#include<iostream>
using namespace std;

    class car
	{
	public:
	
		string model,name; 
		string colour;
		int price;
	    
	    void input()
	    {
	    	cout<<"enter the car name:"<<endl;
	    	cin>>name;
			
			cout<<"enter the car model:"<<endl;
	    	cin>>model;
	    	
	    	cout<<"enter the car colour:"<<endl;
	    	cin>>colour;
	    	
	    	cout<<"enter the car price:"<<endl;
	    	cin>>price;
	    		}
		
		void output()
		{
			cout<<"the car name is = "<<name<<endl;
			
			cout<<"the car model is = "<<model<<endl;
			
			cout<<"the car colour is = "<<colour<<endl;
				
			cout<<"the car price is = "<<price<<endl;
			
		}
};
int main()
{
	car c;
	c.input();
	c.output();
	
	return 0;
	
}

