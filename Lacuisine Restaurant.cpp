//id=hannia password 4321


#include <iostream>
#include <time.h>
#include <conio.h>
#include <process.h>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
#include <windows.h>
#include<iomanip>			

using namespace std;

//   GLOBAL VARIABLE
 
	char c,m;
	int i=0,tot=0,y=0;
	int a1=0,a2=0,a3=0,a4=0,a5=0;
	int b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0;
	int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0;
	int d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0;
	int e1=0,e2=0,e3=0;
	int f1=0,f2=0,f3=0,f4=0,f5=0;
	char t;

//    Functions

void log();
void menu();
void rice();
void chicken();
void chinesespeciality();
void pakistanispeciality();
void beef();
void desserts();
void placeorder();
void totalcustomer();
void func();

//     Main Function

int main()
{
//	log();
	func();
}
	
//calls this function if the login id and password is correct

//       Main Page

void func() 
{
	char loader=254;
	cout<<"\t\t\t\tLoading"<<endl;
	for(int i=0;i<70;i++ )
	{
		system("color 3");
		cout<<loader;
		Sleep(20);
	}
	system("cls");
	
	cout<<"\n\n\t\t======================================================\n";
	cout<<"\t\t\tWELCOME TO HANNIA & MAHNOOR RESTAURENT \n";
	cout<<"\t\t======================================================\n\n\n";

	cout<<"\t\t\t1. MENU  \n\t\t\t2. PLACE ORDER\n\t\t\t3. TOTAL CUSTOMER\n\t\t\t4. LOGOUT\n\t\t\t5. EXIT\n";
	cout<<"\n\n\n\t\tSELECT ONE OF THE OPTION FROM ABOVE";

	t=getche();

		if(t=='2')
		{
			system("cls");
			placeorder();
		}
		if(t=='1')
		{	
			system("cls");
			menu();
		}
		if(t=='3')
		{
			system("cls");
			totalcustomer();
		}
		if(t=='4')
		{
			system("cls");
			log();
		}
		if(t=='5')
		{
			system("cls");	
			exit(0);
		}
		if(t=='b')
		{
			system ("cls");
			func();
		}
	char a;
}

//    Login & password Funcition

void log()
{
	cout<<"Please Enter ID & Password\n";
	cout<<"ID :: ";

	char ch[6],arr2[5];
	int f,z,v;

	for(int i=0;i<6;i++)	
	{
		ch[i]=getche();
		z=ch[i];
		system("cls");
		cout<<" ID :: ";
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
	
	cout<<"\nPassword :: ";
	}
	
	v=strcmp(ch,"hannia");

	if(v!=0)
	{
		exit(0);
	}
	else
	{
		for(int g=0;g<4;g++)
		{
			arr2[g]=getche();
			z=arr2[g];
			system("cls");
			cout<<" id:******\n";
			cout<<" password:";

			for(int h=0;h<=g;h++)
			{
				cout<<"*";
			}
		}

		f=strcmp(arr2,"4321");

		if(f!=0)
		{
			exit(0);
		}
		else
		{
			system("cls");
			func();
		}
	}
}

//      Menu Function

void menu()
{
	cout<<"        \n\t\t~!~!~!~!~!~!~!~!~! MAIN MENUE ~!~!~!~!~!~!~!~!~!\n\n";
	cout<<"\t\t\t1. RICE\n\t\t\t2. CHICKEN\n\t\t\t3. CHINESE SPECIALITY\n";
	cout<<"\t\t\t4. PAKISTANI SPECIALITY\n\t\t\t5. BEEF\n\t\t\t6. DESSERTS\n";
	cout<<"\n\n\t\t\tSELECT OPTION FROM ABOVE\n\n\t\t\tPRESS B TO GO BACK";

	char x, v,n;

	do
	{
		c=getche();
		
			if(c=='1')
			{
				system("cls");
				rice();
			}
			if(c=='2')
			{
				system("cls");
				chicken();
			}
			if(c=='3')
			{
				system("cls");
				chinesespeciality();
			}
			if(c=='4')
			{
				system("cls");
				pakistanispeciality();
			}
			if(c=='5')
			{
				system("cls");
				beef();
			}
			if(c=='6')
			{
				system("cls");
  				desserts();
  		    }
			else
			{
				cout<<"\n invalid input \n";
			}
	}
	while(c!='b');
		if(c=='b')
		{
			system("cls");
			func();
		}
}

int n;

//     Rice Function

void rice()
{
	char b;
	cout<<"1. SPECIAL LA CUISINE RICE		\t\t\t=400\n";
	cout<<"2. SPECIAL LA CUISINE RICE (HALF)	\t\t\t=220\n";
	cout<<"3. CHICKEN FRIED RICE			\t\t\t=400\n";
	cout<<"4. CHICKEN FRIED RICE (HALF)		\t\t\t=200\n";
	cout<<"5. CHICKEN MASALA RICE			\t\t\t=400\n";
	cout<<"\n PRESS B TO GO BACK TO MAIN MENU\n";

	do
	{
		b=getche();

		switch (b)
		{
			case '1':
				cout<<"\nselected\n"	;
				a1++;
				break;
			case '2':
				cout<<"selected\n";
				a2++;
				break;
			case '3':
				cout<<"selected\n"	;
				a3++;
				break;
			case '4':
				cout<<"selected\n";
				a4++;
				break;
			case'5':
				cout<<"selected\n";
				a5++;
				break;
			default:
				cout<<"\n invalid input\n";
				break;
		}
	}
	while(b!='b');
		if(b=='b')
		{
			system("cls"),
			menu();
		}
}	

//       Chicken Function

void chicken()
	{
		cout<<"1. CHICKEN WHITE FINGER      \t\t\t= 440\n";
		cout<<"2. CHICKEN QORMA             \t\t\t= 260\n";
		cout<<"3. CHICKEN JALFRAIZI     	\t\t\t= 440\n";
		cout<<"4. CHIKEN KARHAI    			\t\t\t= 780\n";
		cout<<"5. CHICKEN STEAM ROAST       \t\t\t= 560\n";
		cout<<"6. CHICKEN BONELESS HANDI    \t\t\t= 900\n";
		cout<<"7. CHICKEN ACHAR KARHAI      \t\t\t= 850\n";
		cout<<"8. ARABIAN CHICKEN     	    \t\t\t= 440\n";
		cout<<"9. CHICKEN VEGETABLE    		\t\t\t= 400\n";
		cout<<"A. MADRASI CHICKEN    		\t\t\t= 850\n";
		cout<<"S. CHICKEN BROAST    		\t\t\t= 160\n\n";
		cout<<"PRESS B TO RETURN ";


	char a;


	do
	{
		a=getche();
		
		switch (a)
		{		
			case  '1':
				cout<<"\nselected\n";
				b1++;
				break;
			case '2':
				cout<<"\nselected\n";
				b2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				b3++;
				break;
			case '4':
				cout<<"\nselected\n";
				b4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				b5++;
				break;
			case '6':
				cout<<"\nselected\n";
				b6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				b7++;
				break;
			case '8':
				cout<<"\nselected\n";
				b8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				b9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				b10++;
				break;
			case 's':
				cout<<"\nselected\n";
				b11++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b')
		{
			system ("cls");
			menu();
		}	
}

//       CHINESE SPECIALITY

void chinesespeciality()
	{
		cout<<"1. SP. CHICKEN CHERRY WITH PINEAPPLE     = 500\n";
		cout<<"2. CHICKEN MANCHURRIAN (SIZZLING)        = 440\n";
		cout<<"3. CHICKEN SWEET & SOUR     				= 550\n";
		cout<<"4. CHICKEN WITH ROAST ALMONDS    		= 550\n";
		cout<<"5. CHICKEN GARLIC    	  			    = 520\n";
		cout<<"6. CHICKEN BLACK PEPPER  			    = 520\n";
		cout<<"7. CHICKEN CHILLIES   				    = 550\n";
		cout<<"8. CHICKEN BONELESS       		  	    = 520\n";
		cout<<"9. CHICKEN BALL    						= 475\n";
		cout<<"A. CHICKEN CUTLET   					= 475\n";
		cout<<"S. BEEF CHILLIES DRY    				= 440\n\n";
		cout<<"PRESS B TO RETURN ";

	char a;

	do
	{
		a=getche();
		
		switch (a)
		{		
			case  '1':
				cout<<"\nselected\n";
				c1++;
				break;
			case '2':
				cout<<"\nselected\n";
				c2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				c3++;
				break;
			case '4':
				cout<<"\nselected\n";
				c4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				c5++;
				break;
			case '6':
				cout<<"\nselected\n";
				c6++;
				break;
			case  '7':
				cout<<"\nselected\n";
				c7++;
				break;
			case '8':
				cout<<"\nselected\n";
				c8++;
				break;
			case  '9':
				cout<<"\nselected\n";
				c9++;
				break;
			case 'a':
				cout<<"\nselected\n";
				c10++;
				break;
			case 's':
				cout<<"\nselected\n";
				c11++;
				break;
			default:
				cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b')
		{
			system ("cls");
			menu();
		}	
}

//       PAKISTANI SPECIALITY

void pakistanispeciality()
{
	cout<<"1. MUTTON QORMA    			 	= 500\n";
	cout<<"2. MUTTON BRAIN MASALLA       	= 440\n";
	cout<<"3. MUTTON KARHAI        		 	= 550\n";
	cout<<"4. MUTTON WHITE HANDI   		 	= 550\n";
	cout<<"5. MUTTON ACHAR KARHAI 	     	= 520\n";
	cout<<"6. MUTTON LEG ROAST  (1KG)    	= 520\n";
	cout<<"7. GREEN CHILLI MUTTON       	= 550\n";
	cout<<"8. VEGETABLE RICE       	    	= 520\n";
	cout<<"9. BEEF CHILLIES FRIED RICE  	= 475\n";
	cout<<"A. ITALIAN SHASHLIK WITH RICE	= 475\n";
	cout<<"S. PLAIN RICE   			 	= 440\n\n";
	cout<<"PRESS B TO RETURN ";

	char a;

	do
	{
		a=getche();
		
	switch (a)
	{		
		case  '1':
			cout<<"\nselected\n";
			d1++;
			break;
		case '2':
			cout<<"\nselected\n";
			d2++;
			break;
		case  '3':
			cout<<"\nselected\n";
			d3++;
			break;
		case '4':
			cout<<"\nselected\n";
			d4++;
			break;
		case  '5':
			cout<<"\nselected\n";
			d5++;
			break;
		case '6':
			cout<<"\nselected\n";
			d6++;
			break;
		case  '7':
			cout<<"\nselected\n";
			d7++;
			break;
		case '8':
			cout<<"\nselected\n";
			d8++;
			break;
		case  '9':
			cout<<"\nselected\n";
			d9++;
			break;
		case 'a':
			cout<<"\nselected\n";
			d10++;
			break;
		case 's':
			cout<<"\nselected\n";
			d11++;
			break;
		default:
			cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b')
		{
			system ("cls");
			menu();
		}	
}

//       BEEF

void beef()
{
	cout<<"1. BEEF HOT PLATE SIZZLING    		 	= 500\n";
	cout<<"2. SPECCIAL GARLIC BEEF       			= 440\n";
	cout<<"3. SPECIAL BEEF CHILLIES (LIQUID) 	 	= 550\n\n";
	cout<<"PRESS B TO RETURN ";

	char a;

	do
	{
		a=getche();
		
		switch (a)
		{		
			case  '1':
				cout<<"\nselected\n";
				e1++;
				break;
			case '2':
				cout<<"\nselected\n";
				e2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				e3++;
			default:
				cout<<"\n invalid input\n";}
	}
	while(a!='b');
		if(a=='b')
		{
			system ("cls");
			menu();
		}	
}

//       DESSERTS

void desserts()
{
	cout<<"1. KHEER MIX    			 		= 500\n";
	cout<<"2. FRUIT TRIFFLE       			= 550\n";
	cout<<"3. SPECIAL GAJRELA         		= 500\n";
	cout<<"4. RUSS MALAI   		 			= 350\n";
	cout<<"5. SHEER KHURMA 	     			= 400\n\n";
	cout<<"PRESS B TO RETURN ";

	char a;

	do
	{
		a=getche();
		
		switch (a)
		{		
			case  '1':
				cout<<"\nselected\n";
				f1++;
				break;
			case '2':
				cout<<"\nselected\n";
				f2++;
				break;
			case  '3':
				cout<<"\nselected\n";
				f3++;
				break;
			case '4':
				cout<<"\nselected\n";
				f4++;
				break;
			case  '5':
				cout<<"\nselected\n";
				f5++;
				break;
			default:
				cout<<"\n invalid input\n";
		}
	}
	while(a!='b');
		if(a=='b')
		{
			system ("cls");
			menu();
		}	
}

//       Place order Function

void placeorder()
{
	char z,b;
	int total=0;
	time_t rawtime;struct tm * timeinfo;time ( &rawtime );timeinfo = localtime ( &rawtime );
	cout<< (asctime (timeinfo));
	cout<<"\nDISHES\t\t\t\t\tPRICE (PKR)\n\n"<<endl;

//       RICE ORDER

	if(a1>0)
	{
		cout<<"SPECIAL LA CUISINE RICE 	    = "<<400*a1<<"      "<<"QUANTITY = "<<a1<<"\n";
		total+=(400*a1);
		y++;
	}
	if(a2>0)
	{
		cout<<"SPECIAL LA CUISINE RICE (HALF)	     = "<<220*a2<<"      "<<"QUANTITY = "<<a2<<"\n";
		total+=(80*a2);
		y++;
	}
	if(a3>0)
	{
		cout<<"CHICKEN FRIED RICE      			  = "<<400*a3<<"      "<<"QUANTITY = "<<a3<<"\n";
		total+=(80*a3);
		y++;
	}
	if(a4>0)
	{
		cout<<"CHICKEN FRIED RICE (HALF)       	  = "<<200*a4<<"      "<<"QUANTITY = "<<a4<<"\n";
		total+=(80*a4);
		y++;
	}
	if(a5>0)
	{
		cout<<"CHICKEN MASALA RICE           	  = "<<400*a5<<"      "<<"QUANTITY = "<<a5<<"\n";
		total+=(30*a5);
		y++;
	}

//    CHICKEN ORDER

	if(b1>0)
	{
		cout<<"CHICKEN WHITE FINGER			 			 = "<<440*b1<<"      "<<"QUANTITY = "<<b1<<"\n";
		total+=(440*b1);
		y++;
	}
	if(b2>0)
	{
		cout<<"CHICKEN QORMA     						 = "<<260*b2<<"      "<<"QUANTITY = "<<b2<<"\n";
		total+=(260*b2);
		y++;
	}
	if(b3>0)
	{
		cout<<"CHICKEN JALFRAIZI      					 = "<<440*b3<<"      "<<"QUANTITY = "<<b3<<"\n";
		total+=(440*b3);
		y++;
	}
	if(b4>0)
	{
		cout<<"CHIKEN KARHAI       						 = "<<780*b4<<"      "<<"QUANTITY = "<<b4<<"\n";
		total+=(780*b4);
		y++;
	}
	if(b5>0)
	{
		cout<<"CHICKEN STEAM ROAST           	  		 = "<<560*b5<<"      "<<"QUANTITY = "<<b5<<"\n";
		total+=(560*b5);
		y++;
	}
	if(b6>0)
	{
		cout<<"CHICKEN BONELESS HANDI 			  		 = "<<900*b6<<"      "<<"QUANTITY = "<<b6<<"\n";
		total+=(900*b6);
		y++;
	}
	if(b7>0)
	{
		cout<<"CHICKEN ACHAR KARHAI     				 = "<<850*b7<<"      "<<"QUANTITY = "<<b7<<"\n";
		total+=(850*b7);
		y++;
	}
	if(b8>0)
	{
		cout<<"ARABIAN CHICKEN      			  		 = "<<440*b8<<"      "<<"QUANTITY = "<<b8<<"\n";
		total+=(440*b8);
		y++;
	}
	if(b9>0)
	{
		cout<<"CHICKEN VEGETABLE       	  				 = "<<400*b9<<"      "<<"QUANTITY = "<<b9<<"\n";
		total+=(400*b9);
		y++;
	}
	if(b10>0)
	{
		cout<<"MADRASI CHICKEN           	  			 = "<<850*b10<<"      "<<"QUANTITY = "<<b10<<"\n";
		total+=(850*b10);
		y++;
	}
	if(b11>0)
	{
		cout<<"CHICKEN BROAST       	  				 = "<<160*b11<<"      "<<"QUANTITY = "<<b11<<"\n";
		total+=(160*b11);
		y++;
	}

//    chinese speciality

	if(c1>0)
	{
		cout<<"SP. CHICKEN CHERRY WITH PINEAPPLE 			  	= "<<500*c1<<"      "<<"QUANTITY = "<<c1<<"\n";
		total+=(500*c1);
		y++;
	}
	if(c2>0)
	{
		cout<<"CHICKEN MANCHURRIAN (SIZZLING)   			    = "<<400*c2<<"      "<<"QUANTITY = "<<c2<<"\n";
		total+=(440*c2);
		y++;
	}
	if(c3>0)
	{
		cout<<"CHICKEN SWEET & SOUR      					    = "<<550*c3<<"      "<<"QUANTITY = "<<c3<<"\n";
		total+=(550*c3);
		y++;
	}
	if(c4>0)
	{
		cout<<"CHICKEN WITH ROAST ALMONDS        			    = "<<550*c4<<"      "<<"QUANTITY = "<<c4<<"\n";
		total+=(550*c4);
		y++;
	}
	if(c5>0)
	{
		cout<<"CHICKEN GARLIC				                 	= "<<520*c5<<"      "<<"QUANTITY = "<<c5<<"\n";
		total+=(520*c5);
		y++;
	}
	if(c6>0)
	{
		cout<<"CHICKEN BLACK PEPPER			  					= "<<520*c6<<"      "<<"QUANTITY = "<<c6<<"\n";
		total+=(520*c6);
		y++;
	}
	if(c7>0)
	{
		cout<<"CHICKEN CHILLIES      							= "<<550*c7<<"      "<<"QUANTITY = "<<c7<<"\n";
		total+=(550*c7);
		y++;
	}
	if(c8>0)
	{
		cout<<"CHICKEN BONELESS      			  				= "<<520*c8<<"      "<<"QUANTITY = "<<c8<<"\n";
		total+=(520*c8);
		y++;
	}
	if(c9>0)
	{
		cout<<"CHICKEN BALL       	  							= "<<475*c9<<"      "<<"QUANTITY = "<<c9<<"\n";
		total+=(475*c9);
		y++;
	}
	if(c10>0)
	{
		cout<<"CHICKEN CUTLET           	  				 	= "<<475*c10<<"      "<<"QUANTITY = "<<c10<<"\n";
		total+=(475*c10);
		y++;
	}
	if(c11>0)
	{
		cout<<"BEEF CHILLIES DRY       	  						= "<<520*c11<<"      "<<"QUANTITY = "<<c11<<"\n";
		total+=(520*c11);
		y++;
	}


//    pakistani speciality

	if(d1>0)
	{
		cout<<"MUTTON QORMA 			 			 = "<<500*d1<<"      "<<"QUANTITY = "<<d1<<"\n";
		total+=(500*d1);
		y++;
	}
	if(d2>0)
	{
		cout<<"MUTTON BRAIN MASALLA     			 = "<<440*d2<<"      "<<"QUANTITY = "<<d2<<"\n";
		total+=(440*d2);
		y++;
	}
	if(d3>0)
	{
		cout<<"MUTTON KARHAI      			 		 = "<<550*d3<<"      "<<"QUANTITY = "<<d3<<"\n";
		total+=(550*d3);
		y++;
	}
	if(d4>0)
	{
		cout<<"MUTTON WHITE HANDI       	  		 = "<<550*d4<<"      "<<"QUANTITY = "<<d4<<"\n";
		total+=(550*d4);
		y++;
	}
	if(d5>0)
	{
		cout<<"MUTTON ACHAR KARHAI           	  	 = "<<520*d5<<"      "<<"QUANTITY = "<<d5<<"\n";
		total+=(520*d5);
		y++;
	}
	if(d6>0)
	{
		cout<<"MUTTON LEG ROAST  (1KG) 			= "<<520*d6<<"      "<<"QUANTITY = "<<d6<<"\n";
		total+=(520*d6);
		y++;
	}
	if(d7>0)
	{
		cout<<"GREEN CHILLI MUTTON     		 = "<<550*d7<<"      "<<"QUANTITY = "<<d7<<"\n";
		total+=(550*d7);
		y++;
	}
	if(d8>0)
	{
		cout<<"VEGETABLE RICE      			 = "<<520*d8<<"      "<<"QUANTITY = "<<d8<<"\n";
		total+=(520*d8);
		y++;
	}
	if(d9>0)
	{
		cout<<"BEEF CHILLIES FRIED RICE       	= "<<475*d9<<"      "<<"QUANTITY = "<<d9<<"\n";
		total+=(475*d9);
		y++;
	}
	if(d10>0)
	{
		cout<<"ITALIAN SHASHLIK WITH RICE        = "<<475*d10<<"      "<<"QUANTITY = "<<d10<<"\n";
		total+=(475*d10);
		y++;
	}
	if(d11>0)
	{
		cout<<"PLAIN RICE       	  	= "<<440*d11<<"      "<<"QUANTITY = "<<d11<<"\n";
		total+=(440*d11);
		y++;
	}

//   beef function

	if(e1>0)
	{
		cout<<"BEEF HOT PLATE SIZZLING 			 = "<<500*e1<<"      "<<"QUANTITY = "<<e1<<"\n";
		total+=(500*e1);
		y++;
	}
	if(e2>0)
	{
		cout<<"SPECCIAL GARLIC BEEF     		 = "<<440*e2<<"      "<<"QUANTITY = "<<e2<<"\n";
		total+=(440*e2);
		y++;
	}
	if(e3>0)
	{
		cout<<"SPECIAL BEEF CHILLIES (LIQUID)    = "<<550*e3<<"      "<<"QUANTITY = "<<e3<<"\n";
		total+=(550*e3);
		y++;
	}

//   deserts function

	if(f1>0)
	{
		cout<<"KHEER MIX 				= "<<500*f1<<"      "<<"QUANTITY = "<<f1<<"\n";
		total+=(500*f1);
		y++;
	}
	if(f2>0)
	{
		cout<<"FRUIT TRIFFLE     		= "<<550*f2<<"      "<<"QUANTITY = "<<f2<<"\n";
		total+=(550*f2);
		y++;
	}
	if(f3>0)
	{
		cout<<"SPECIAL GAJRELA      	= "<<500*f3<<"      "<<"QUANTITY = "<<f3<<"\n";
		total+=(500*f3);
		y++;
	}
	if(f4>0)
	{
		cout<<"RUSS MALAI       		= "<<350*f4<<"      "<<"QUANTITY = "<<f4<<"\n";
		total+=(350*f4);
		y++;
	}
	if(f5>0)
	{
		cout<<"SHEER KHURMA           	= "<<400*f5<<"      "<<"QUANTITY = "<<f5<<"\n";
		total+=(400*f5);
		y++;
	}

//       total  bill
	
	cout<<"TOTAL BILL      = "<<total<<endl<<"TOTAL DISHES    = "<<y<<endl;
	tot+=total;
	
	cout<<"\nPRESS B TO GO BACK";
		
	z=getche();
	
	if(z=='b')
	{
		a1=0,a2=0,a3=0,a4=0,a5=0,b1=0,b2=0,b3=0,b4=0,b5=0,b6=0,b7=0,b8=0,b9=0,b10=0,b11=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c10=0,c11=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,d7=0,d8=0,d9=0,d10=0,d11=0,e1=0,e2=0,e3=0,f1=0,f2=0,f3=0,f4=0,f5=0;
		b++;	
		system("cls");
		func();	
	}
}

//      Customer Counter Function

void totalcustomer()
	{
		char b;
		time_t rawtime;struct tm * timeinfo;time ( &rawtime );timeinfo = localtime ( &rawtime );
		
		cout<< (asctime (timeinfo));
		cout<<"\nTOTAL CUSTOMER = "<<b<<endl<<"TOTAL REVENUE = "<<tot<<endl<<"TOTAL ORDERS = "<<y<<endl;
		cout<<"\nPRESS B TO GO BACK";
	
	
		char e;
	
		e=getche();
		
		if(e=='b')
		{
			system("cls");
			func();
		}
}

//                                         THE END
