#include<iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	
	//this variables will hold the quantity of these food items
	int Qrooms=0, Qpasta=0, Qburgur=0, Qnoodles=0, Qshakes=0, Qchicken=0;
	
	//hold the value of number of food items that have been sold
	int Srooms=0, Spasta=0, Sburgur=0, Snoodles=0, Sshakes=0, Schicken=0;
	
	//price
	int Total_rooms=0, Total_pasta=0, Total_burgur=0, Total_noodles=0, Total_shakes=0, Total_chicken=0;
	 
	 
	 cout<<"\n\t  Quantity of items we have ";
	 cout<<"\n Room avalianle";
	 cin>>Qrooms;
	 cout<<"\n Quantity of pasta ";
	 cin>>Qpasta;
	 cout<<"\n Quantity of burgur ";
	 cin>>Qburgur;
	 cout<<"\n Quantity of noodles ";
	 cin>>Qnoodles;
	 cout<<"\n Quantity of shakes ";
	 cin>>Sshakes;
	 cout<<"\n Quantity of chiken ";
	 cin>>Qchicken;
	 
	 
	 m:
	 cout<<"\n\t\t\t Please select from  the menu options  ";
	 cout<<"\n\n1) Rooms ";
	 cout<<"\n2) pasta   ";
	 cout<<"\n3) Burgur  ";
	 cout<<"\n4) Noodles ";
	 cout<<"\n5) shake   ";
	 cout<<"\n6) chiken  ";
	 cout<<"\n7) information  regarding  sales and  collection ";
	 cout<<"\n8)Exit ";
	 
	 
	cout<<"\n Please  Entr Your Choice ! ";
	cin>>choice;
	
	
	switch(choice)
	
	{
		case 1:
		 cout<<"\n\n Entr the number of Room you want: ";
		 
		 cin>>quant;
		 if(Qrooms-Srooms >=quant)
		 {
		 	Srooms=Srooms+quant;
		 	Total_rooms= Total_rooms+quant*1200;
		 	cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you ";
		 }
		 else
		 
		 	cout<<"\n\tonly "<<Qrooms-Srooms<<"Rooms remaining in hotel ";
		 	break;
		 	
		 case 2:
		 cout<<"\n\n Entr pasta Quantity : ";
		 
		 cin>>quant;
		 if(Qpasta-Spasta >=quant)
		 {
		 	Spasta=Spasta+quant;
		 	Total_pasta= Total_pasta+quant*250;
		 	cout<<"\n\n\t\t"<<quant<<"pasta is order  ";
		 }
		 else
		 
		 	cout<<"\n\tonly "<<Qpasta-Spasta<<"pasta remaining in hotel ";
		 	break;
		 	
		  case 3:
		 cout<<"\n\n Entr Burgur Quantity : ";
		 
		 cin>>quant;
		 if (Qburgur-Sburgur >=quant)
		 {
		 	Sburgur=Sburgur+Qburgur;
		 	Total_burgur= Total_burgur+quant*120;
		 	cout<<"\n\n\t\t"<<quant<<"burgur is order  ";
		 }
		 else
		 
		 	cout<<"\n\tonly "<<Qburgur-Sburgur<<"burgur remaining in hotel ";
		 	break;
			 
		 case 4:
		 cout<<"\n\n Entr Noodles Quantity : ";
		 
		 cin>>quant;
		 if(Qnoodles-Snoodles >=quant)
		 {
		 	Snoodles=Snoodles+quant;
		 	Total_noodles= Total_noodles+quant*150;
		 	cout<<"\n\n\t\t"<<quant<<"Noodles is order  ";
		 }
		 else
		 
		 	cout<<"\n\tonly "<<Qnoodles-Snoodles<<"noodles remaining in hotel ";
		 	break;
			 
		 case 5:
		 cout<<"\n\n Entr shakes Quantity : ";
		 
		 cin>>quant;
		 if(Qshakes-Sshakes >=quant)
		 {
		 	Sshakes=Sshakes+quant;
		 	Total_shakes= Total_shakes+quant*200;
		 	cout<<"\n\n\t\t"<<quant<<"shakes is order  ";
		 }
		 else
		 
		 	cout<<"\n\tonly "<<Qshakes-Sshakes<<"shakes remaining in hotel ";
		 	break;
			 
		 case 6:
		 cout<<"\n\n Entr chicken Quantity : ";
		 
		 cin>>quant;
		 if(Qchicken-Schicken >=quant)
		 {
		 	Spasta=Schicken+quant;
		 	Total_chicken= Total_chicken+quant*150;
		 	cout<<"\n\n\t\t"<<quant<<"chicken is order  ";
		 }
		 else
		 
		 	cout<<"\n\tonly "<<Qchicken-Schicken<<"Chicken remaining in hotel ";
		 	break;
			 
		case 7:
		
		cout<<"\n\t\tDetails og seles of collection ";
		cout<<"\n\n Number of room we hed : "<<Qrooms;
		cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
		cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
		cout<<"\n\mTotal room collection for the day :"<<Total_rooms;
		
		
		
		cout<<"\n\n Number of pasta we hed : "<<Qpasta;
		cout<<"\n\n Number of pasta we gave for sold "<<Spasta;
		cout<<"\n\n Remaining pasta : "<<Qpasta-Spasta;
		cout<<"\n\mTotal pasta collection for the day :"<<Total_pasta;
		
		
		
        
		cout<<"\n\n Number of burgur we hed : "<<Qburgur;
		cout<<"\n\n Number of burgur we gave for sold "<<Sburgur;
		cout<<"\n\n Remaining burgur : "<<Qburgur-Sburgur;
		cout<<"\n\mTotal burgur collection for the day :"<<Total_burgur;
		
		
		
		
	    cout<<"\n\n Number of noodles we hed : "<<Qnoodles;
		cout<<"\n\n Number of noodles we gave for sold "<<Snoodles;
		cout<<"\n\n Remaining noodles : "<<Qnoodles-Snoodles;
		cout<<"\n\mTotal noodles collection for the day :"<<Total_noodles;
		
		
		
		
	    
		cout<<"\n\n Number of shakes we hed : "<<Qshakes;
		cout<<"\n\n Number of shakes we gave for sold "<<Sshakes;
		cout<<"\n\n Remaining shakes : "<<Qshakes-Sshakes;
		cout<<"\n\mTotal shakes collection for the day :"<<Total_shakes;
		
		
		
		
	    cout<<"\n\n Number of chicken we hed : "<<Qchicken;
		cout<<"\n\n Number of chicken we gave for sold "<<Schicken;
		cout<<"\n\n Remaining chicken : "<<Qchicken-Schicken;
		cout<<"\n\mTotal chicken collection for the day :"<<Total_chicken;
		
		
		
		case 8:
		exit(0);
		
		 default:
		  cout<<"\n please select the number mentioned abave !";
		  
		  
		   	 	
		 	 	 	 	 	
	}
    goto m;	
	 
}
