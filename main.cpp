#include <iostream>
#include "Date.h"
#include <cstdlib>
#include <exception>
#include <cstring>
#include <ctime>
#include <stdexcept>
#include <sstream>
#include<conio.h>
#include<iomanip>

using namespace std;

//Function TestDate()
void TestDate(){

     Date t1;
     char in1[14];
     int i=0;


    cout<<"Lets create some dateformats. Press enter to continue..\n";
    getch();


    i=0;
    try{
         cout<<" \nTrying to set dd-0-yy as dateformat..\n";
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         DateFormat hg("dd","0","yy");  //using overloaded constructor1
         Date f4;
         f4.setFormat(hg);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f4<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg = dd-0-yy successfully created..\n";



    cout<<"\nIn order to check if the above format is set to all the dates, Lets create \nanother date.\n";

    i=0;
     try{
         cout<<"Trying to create a new date test5 = 2-2-2013 \n";
         Date test5("2-2-2013");
         cout<<"Using overloaded constructor2 DateFormat(char*) of Dateformat class...\n";
         cout<<"Above date created successfully.\n";
         cout<<"Trying to print the Date and Dateformat of test5 using getFormat().\n";
         cout<<"Date: "<<test5<<endl;
         cout<<"Dateformat : "<<test5.getFormat().getdate()<<"-"<<test5.getFormat().getmonth()<<"-"<<test5.getFormat().getyear()<<endl;


      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)           // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";


        i=0;
      try{
         cout<<" \nTrying to set d-mm-yy as dateformat..\n";

         DateFormat hg1("d","mm","yy");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f0;
         f0.setFormat(hg1);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f0<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg1 = d-mm-yy successfully created..\n";


        i=0;
      try{
         cout<<" \nTrying to set d-mmm-yyyy as dateformat..\n";
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         DateFormat hg2("d","mmm","yyyy");  //using overloaded constructor1

         Date f10;
         f10.setFormat(hg2);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f10<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg2 = d-mmm-yyyy successfully created..\n";


      i=0;
      try{
         cout<<" \nTrying to set d-0-0 as dateformat..\n";

         DateFormat hg3("d","0","0");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f11;
         f11.setFormat(hg3);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f11<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg3 = d-0-0 successfully created\n";



       i=0;
      try{
         cout<<" \nTrying to set dd-0-yyyy as dateformat..\n";

         DateFormat hg4("dd","0","yyyy");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f12;
         f12.setFormat(hg4);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f12<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg4 = dd-0-yyyy successfully created..\n";


       i=0;
      try{
         cout<<" \nTrying to set dd-mmm-yy as dateformat..\n";

         DateFormat hg5("dd","mmm","yy");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f13;
         f13.setFormat(hg5);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f13<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg5 = dd-mmm-yy successfully created\n";



      i=0;
      try{
         cout<<" \nTrying to set 0-0-0 as dateformat..\n";

         DateFormat hg6("0","0","0");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f14;
         f14.setFormat(hg6);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f14<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg6 = 0-0-0 successfully created\n";


     i=0;
      try{
         cout<<" \nTrying to set 0-mmm-yyyy as dateformat..\n";

         DateFormat hg7("0","mmm","yyyy");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f15;
         f15.setFormat(hg7);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f15<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg7 = 0-mmm-yyyy successfully created\n";


         i=0;
      try{
         cout<<" \nTrying to set d-m-yyyy as dateformat..\n";

         DateFormat hg8("d","m","yyyy");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f16;
         f16.setFormat(hg8);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f16<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg8 = d-m-yyyy successfully created\n";




         i=0;
      try{
         cout<<" \nTrying to set d-m-yy as dateformat..\n";

         DateFormat hg9("d","m","yy");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f17;
         f17.setFormat(hg9);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f17<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg9 = d-m-yy successfully created\n";


         i=0;
      try{
         cout<<" \nTrying to set dd-mmm-0 as dateformat..\n";

         DateFormat hg10("dd","mmm","0");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class." ;
         Date f18;
         f18.setFormat(hg10);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f18<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg10 = dd-mmm-0 successfully created\n";



         i=0;
      try{
         cout<<" \nTrying to set dd-mm-0 as dateformat..\n";

         DateFormat hg11("dd","mm","0");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f19;
         f19.setFormat(hg11);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f19<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg11 = dd-mm-0 successfully created\n";


        i=0;
      try{
         cout<<" \nTrying to set 0-mmm-0 as dateformat..\n";

         DateFormat hg12("0","mmm","0");  //using overloaded constructor1
         cout<<"Using overloaded constructor1 DateFormat(char*,char*,char*) of Dateformat class.";
         Date f20;
         f20.setFormat(hg12);
         cout<<"Trying to print today's date using the above format:\n";
         cout<<f20<<endl;
       }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Above Dateformat is invalid.\n";
       else
       cout<<"Dateformat hg12 = 0-mmm-0 successfully created\n";



    cout<<"\n\nLets see the error cases in dateformats. Press Enter to continue.\n";
    getch();

    i=0;
    try{
         cout<<" \nTrying to set dd/mm/yyyy as dateformat..\n";
         DateFormat test1("dd/mm/yyyy");    //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                        // prints the below statement only if throws an error
       cout<<"Usage of / in Dateformat is invalid.\n";



      i=0;
    try{
         cout<<" \nTrying to set dd-mm-yyy as dateformat..\n";
         DateFormat test2("dd-mm-yyy");  //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                      // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (year format invalidity) \n";



      i=0;
      try{
         cout<<" \nTrying to set ddd-mm-yyyy as dateformat..\n";
         DateFormat test3("ddd-mm-yyyy");  //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                  // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (day format invalidity)\n";




      i=0;
      try{
         cout<<" \nTrying to set dd-mm-yyyr as dateformat..\n";
         DateFormat test4("dd-mm-yyyr"); //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                 // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (year format invalidity)\n";


        i=0;
      try{
         cout<<" \nTrying to set ddmmyy (without -) as dateformat..\n";
         DateFormat test5("ddmmyy"); //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                 // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (Absence of -)\n";



         i=0;
      try{
         cout<<" \nTrying to set d-m-y  as dateformat..\n";
         DateFormat test6("d-m-y"); //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                 // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (year format invalidity)\n";



        i=0;
      try{
         cout<<" \nTrying to set d-mm-y  as dateformat..\n";
         DateFormat test7("d-mm-y"); //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                 // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (year format invalidity)\n";



        i=0;
      try{
         cout<<" \nTrying to set DD-MM-YY (capital letters) as dateformat..\n";
         DateFormat test6("DD-MM-YY"); //using overloaded constructor2
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)                 // prints the below statement only if throws an error
       cout<<"Invalid Dateformat (capital letters not allowed)\n";




   cout <<"\nNone of the above are valid to be dateformat for the class Date. Press enter to proceed further..";
   getch();


     cout<<"Lets keep dd-0-yyyy as the dateformat for the rest of the program.\n";
     DateFormat ff("dd-0-yyyy");
     Date tt;
     tt.setFormat(ff); //setFormat() used



     //USAGE OF getFormat() function
     cout<<"\n\nLet's check if the format is alloted for every object of Date class\n";

     cout<<"Creating a new date Jk: Day-3 Month-2 Year-2015\n";

     Date Jk((Day)3,(Month)2,2015); //overloaded constructor1
     cout<<"Invoking the overloaded constructor1 Date::Date(Day d, Month m, Year y)..\n";

     cout<<"Using getFormat() function, we are trying to print the dateformat of Date Jk..\n";

     cout<<"Dateformat of Jk = "<<Jk.getFormat().getdate()<<"-"<<Jk.getFormat().getmonth()<<"-"<<Jk.getFormat().getyear()<<endl;
     cout<<"Jk: "<<Jk<<endl;



      cout<<"\n\nLet's create some dates using this format. Press enter to continue.\n";
      getch();


     i=0;
     try{
         cout<<" \nTrying to create a new date 29-2-2015 ..\n";
         Date test5("29-2-2015");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)           // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";


      i=0;
     try{
         cout<<" \nTrying to create a new date 27-13-2013 ..\n";
         Date test6("27-13-2013");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)            // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";

     i=0;
     try{
         cout<<" \nTrying to create a new date 7-1-2050 ..\n";
         Date test7("7-1-2050");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)             // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";


      i=0;
     try{
         cout<<" \nTrying to create a new date 30-12-1949 ..\n";
         Date test8("30-12-1949");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)             // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";



      i=0;
     try{
         cout<<" \nTrying to create a new date 34-1-2000 ..\n";
         Date test7("34-1-2000");
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)             // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";



       i=0;
     try{
         cout<<" \nTrying to create a new date 31-11-2000 ..\n";
         Date test7("31-11-2000");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)             // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";


       i=0;
     try{
         cout<<" \nTrying to create a new date 30-2-2016 ..\n";
         Date test7("30-2-2016");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)             // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";


        i=0;
     try{
         cout<<" \nTrying to create a new date 31-4-2003 ..\n";
         Date test7("31-4-2003");
      }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}
       if(i==1)              // prints the below statement only if throws an error
       cout<<"Invalid Date.\n";





     //User creating a date
     Date t2;
     cout<<"\n\nLet the user create a new date.\nCreating new date...\n";

     i=0;
     while(i==0){
     try{i=1;cin>>t2;}    //using the explicit istream operator and overloaded constructor1 of Date class

      catch(invalid_argument& e1)
      {cout<<e1.what();i=0;}
      catch(out_of_range& ee1)
	   {cout<<ee1.what();i=0;}
      catch(domain_error& eee1)
       {cout<<eee1.what();i=0;}


      if(i==0)
      cout<<"Please try again..\n";

      if(i==1)
      {
        cout<<"Date (t2): ";
        cout<<t2;       //usage of explicit ostream operator of class Date
        cout<<"\nDate successfully created !!\n\n";}


     }//end of while

     cout<<"Lets check the prefix and postfix operators. Press Enter to continue.\n";
     getch();

     // CHECKING THE WORKING OF THE OPERATORS

     cout<<"\n       POSTFIX & PREFIX OPERATIONS ON DATES\n\n";


      cout<<"Postfix(++): Incrementing by 1 week.\n";


        i=0;
     try{
         cout<<" \nTrying to create a new date 12-1-2003 ..\n";
         Date test7("12-1-2003");
         cout<<"New date created..Trying to use ++(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7++;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 29-12-2025 ..\n";
         Date test7("29-12-2025");
         cout<<"New date created..Trying to use ++(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7++;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 28-2-2016 ..\n";
         Date test7("28-2-2016");
         cout<<"New date created..Trying to use ++(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7++;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 25-4-2033 ..\n";
         Date test7("25-4-2033");
         cout<<"New date created..Trying to use ++(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7++;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        cout<<"\nLets see some exception cases..\n";

        i=0;
     try{
         cout<<" \nTrying to create a new date 28-12-2049 ..\n";
         Date test7("28-12-2049");
         cout<<"New date created..Trying to use ++(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7++;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 30-12-2049 ..\n";
         Date test7("30-12-2049");
         cout<<"New date created..Trying to use ++(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7++;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


       cout<<"\nLets check the functioning of prefix(++). Press Enter to continue.\n";
       getch();


      //Prefix++ operator
       cout<<"\nPrefix(++): Incrementing by 1 day.\n";


        i=0;
     try{
         cout<<" \nTrying to create a new date 12-1-2003 ..\n";
         Date test7("12-1-2003");
         cout<<"New date created..Trying to use ++(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         ++test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 31-12-2025 ..\n";
         Date test7("31-12-2025");
         cout<<"New date created..Trying to use ++(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         ++test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 28-2-2016 ..\n";
         Date test7("28-2-2016");
         cout<<"New date created..Trying to use ++(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         ++test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 30-4-2033 ..\n";
         Date test7("30-4-2033");
         cout<<"New date created..Trying to use ++(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         ++test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        cout<<"\nLets see some exception cases..\n";

        i=0;
     try{
         cout<<" \nTrying to create a new date 31-12-2049 ..\n";
         Date test7("31-12-2049");
         cout<<"New date created..Trying to use ++(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         ++test7;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


      cout<<"\nLets check the functioning of postfix(--). Press Enter to continue.\n";
      getch();

      //Postfix--
      cout<<"\nPostfix(--): Decrementing by 1 week.\n";


        i=0;
     try{
         cout<<" \nTrying to create a new date 1-1-2003 ..\n";
         Date test7("1-1-2003");
         cout<<"New date created..Trying to use --(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7--;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 3-3-1996 ..\n";
         Date test7("3-3-1996");
         cout<<"New date created..Trying to use --(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7--;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 2-5-1970 ..\n";
         Date test7("2-5-1970");
         cout<<"New date created..Trying to use --(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7--;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 25-4-2033 ..\n";
         Date test7("25-4-2033");
         cout<<"New date created..Trying to use --(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7--;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        cout<<"\nLets see some exception cases..\n";

        i=0;
     try{
         cout<<" \nTrying to create a new date 1-1-1950 ..\n";
         Date test7("1-1-1950");
         cout<<"New date created..Trying to use --(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7--;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 3-1-1950 ..\n";
         Date test7("3-1-1950");
         cout<<"New date created..Trying to use --(postfix operator) on the above date..\n";
         cout<<"Resultant date : ";
         test7--;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


       cout<<"\nLets check the functioning of prefix(--). Press Enter to continue.\n";
       getch();

       //Prefix-- operator
       cout<<"\nPrefix(--): Decrementing by 1 day.\n";


        i=0;
     try{
         cout<<" \nTrying to create a new date 1-1-2003 ..\n";
         Date test7("1-1-2003");
         cout<<"New date created..Trying to use --(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         --test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 3-12-2025 ..\n";
         Date test7("3-12-2025");
         cout<<"New date created..Trying to use --(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         --test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 1-3-2016 ..\n";
         Date test7("1-3-2016");
         cout<<"New date created..Trying to use --(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         --test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}

        i=0;
     try{
         cout<<" \nTrying to create a new date 30-4-2033 ..\n";
         Date test7("30-4-2033");
         cout<<"New date created..Trying to use --(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         --test7;
         cout<<test7<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        cout<<"\nLets see some exception cases..\n";

        i=0;
     try{
         cout<<" \nTrying to create a new date 1-1-1950 ..\n";
         Date test7("1-1-1950");
         cout<<"New date created..Trying to use --(prefix operator) on the above date..\n";
         cout<<"Resultant date : ";
         --test7;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}



      cout<<"\nLets check the functioning of operator+(int). Press Enter to continue.\n";
      getch();


     cout<<"\n\nCHECKING OF operator+(int k) \n";

            //postfix++
       i=0;
     try{
         cout<<" \nTrying to create a new date 2-1-2030 ..\n";
         Date test7("2-1-2030");
         cout<<"New date created.Let k=17\n";
         cout<<"Resultant date : ";
         Date test0=test7+17;
         cout<<test0<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}



       i=0;
     try{
         cout<<" \nTrying to create a new date 27-12-2019 ..\n";
         Date test7("27-12-2019");
         cout<<"New date created.Let k=8\n";
         cout<<"Resultant date : ";
         Date test0=test7+8;
         cout<<test0<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


      i=0;
     try{
         cout<<" \nTrying to create a new date 1-1-2019 ..\n";
         Date test7("1-1-2019");
         cout<<"New date created.Let k=-10\n";
         cout<<"Resultant date : ";
         Date test0=test7-10;
         cout<<test0<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


      i=0;
     try{
         cout<<" \nTrying to create a new date 3-3-2016 ..\n";
         Date test7("3-3-2016");
         cout<<"New date created.Let k=-28\n";
         cout<<"Resultant date : ";
         Date test0=test7-28;
         cout<<test0<<endl;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


     cout<<"\n\nLet's see some exceptions for this operator.\n";

      i=0;
     try{
         cout<<" \nTrying to create a new date 19-12-2049 ..\n";
         Date test7("19-12-2049");
         cout<<"New date created.Let k=20\n";
         cout<<"Resultant date : ";
         Date test0=test7+20;

        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}


        i=0;
     try{
         cout<<" \nTrying to create a new date 12-1-1950 ..\n";
         Date test7("12-1-1950");
         cout<<"New date created.Let k=-15\n";
         cout<<"Resultant date : ";
         Date test0=test7-15;
        // cout<<test0;
        }

     //for catching the errors
      catch(invalid_argument& e1)
	   {cout<<e1.what();i=1;}
	   catch(out_of_range& ee1)
	   {cout<<ee1.what();i=1;}
       catch(domain_error& eee1)
       {cout<<eee1.what();i=1;}



    cout<<"\nLets check the other operators. Press enter to continue.\n\n";
    getch();

     //CHECKING OVERLOADED CONSTRUCTOR2 & LEAPYEAR()

     cout<<"Checking of leapYear() function\n\n";

     cout<<"Check for 27-12-2016 :\n";

     Date rt("27-12-2016");

      if(rt.leapYear()==true)
      {
          cout<<rt;
          cout<<"  is a leap year.\n";
      }
      else
      {
          cout<<rt;
          cout<<"  is not a leap year.\n";

      }

       cout<<"Check for 7-2-2013 :\n";


     Date tr("7-2-2013");

      if(tr.leapYear()==true)
      {
          cout<<tr;
          cout<<"  is a leap year.\n";
      }
      else
      {
          cout<<tr;
          cout<<"  is not a leap year.\n";

      }


     cout<<"\nLets create another date (t4) to check LeapYear() function.\n";

     Date t4,dum;

     i=0;

     while(i==0){
     cout<<"Enter the date (t4) in any valid format you want (d-m-yy,dd-mm-yyyy....):\n";
      try{
     cin>>in1;
     i=1;
     cout<<"Invoking the overloaded constructor2 of Date class..\n";
     Date dummy(in1);     //Invoking the overloaded constructor2 OF Date class

     dum=dummy ;   //Invoking the copy constructor
      }


     catch(invalid_argument& e1)
      {cout<<e1.what();i=0;}
      catch(out_of_range& ee1)
      {cout<<ee1.what();i=0;}
      catch(domain_error& eee1)
      {cout<<eee1.what();i=0;}

      if(i==0)
      cout<<"Invalid format. Please try again..\n";

      if(i==1)
      {
       t4=dum;          //INVOKING THE COPY CONSTRUCTOR OF DATE CLASS
       cout<<"Date (t4): ";
       cout<<t4;       //usage of explicit ostream operator of class Date
       cout<<"\nDate successfully created !!\n\n";}



     }//end of while

      //Leap year function checking

      cout<<"Checking if Date (t4) is a leap year or not..\n";

      if(t4.leapYear()==true)
      {
          cout<<t4;
          cout<<" is a leap year.\n";
      }
      else
      {
          cout<<t4;
          cout<<" is not a leap year.\n";

      }

       cout<<"\nLets check the functioning of operator-(Date). Press Enter to continue.\n";
       getch();


      cout<<"\n\nCHECKING OF operator-(Date) :\n";
      //CHECKING operator-(Date& x)
      cout<<"\n Now, let's check the difference (no of days) between t3(12-2-2014) and t4.\n";
      Date t3("12-2-2014");
      cout<<"t3= ";cout<<t3;cout<<endl;
      cout<<"t4= ";cout<<t4;cout<<endl;

      int h;
      h=t3-t4;  //using the operator-()

      cout<<"No of days between t3 and t4 = "<<h<<endl;

      cout<<"\nLets take another case..\n";
      cout<<"b1=12-1-2020 & b2=2-2-2020\nb1-b2= ";
      Date b1("12-1-2020");
      Date b2("2-2-2020");

      cout<<b1-b2<<" days"<<endl;


       cout<<"\nLets go to next part (Binary relational operators). Press enter to continue.\n\n";
       getch();


      // CHECKING OF BINARY RELATIONAL OPERATORS

     cout<<"\n        CHECKING OF BINARY RELATIONAL OPERATORS\n";


     cout<<"\nOperator ==\n";

     cout<<"\na1= 21-12-2010 & a2= 21-12-2010\n";
     Date a1("21-12-2010");
     Date a2("21-12-2010");

      if(a1==a2)
     {
         cout<<"a1=a2 -> true.\n";
     }
     else
     {
         cout<<"a1=a2 -> false.\n";
     }

     cout<<"\na11= 1-2-2010 & a12= 13-12-2010\n";
     Date a11("1-2-2010");
     Date a12("13-12-2010");

      if(a11==a12)
     {
         cout<<"a11=a12 -> true.\n";
     }
     else
     {
         cout<<"a11=a12 -> false.\n";
     }



      cout<<"\nOperator !=\n";

     cout<<"\na1= 21-12-2010 & a2= 21-12-2010\n";

      if(a1!=a2)
     {
         cout<<"a1!=a2 -> true.\n";
     }
     else
     {
         cout<<"a1!=a2 -> false.\n";
     }

     cout<<"\na11= 1-2-2010 & a12= 13-12-2010\n";


      if(a11!=a12)
     {
         cout<<"a11!=a12 -> true.\n";
     }
     else
     {
         cout<<"a11!=a12 -> false.\n";
     }



     cout<<"\nOperator <\n";

     cout<<"\na1= 21-12-2010 & a2= 21-12-2010\n";


      if(a1<a2)
     {
         cout<<"a1<a2 -> true.\n";
     }
     else
     {
         cout<<"a1<a2 -> false.\n";
     }

     cout<<"\na11= 1-2-2010 & a12= 13-12-2010\n";


      if(a11<a12)
     {
         cout<<"a11<a12 -> true.\n";
     }
     else
     {
         cout<<"a11<a12 -> false.\n";
     }



      cout<<"\nOperator >\n";

     cout<<"\na3= 21-1-2010 & a4= 2-12-2008\n";
     Date a3("21-1-2010");
     Date a4("2-12-2008");

      if(a3>a4)
     {
         cout<<"a3>a4 -> true.\n";
     }
     else
     {
         cout<<"a3>a4 -> false.\n";
     }

     cout<<"\na11= 1-2-2010 & a12= 13-12-2010\n";


      if(a11>a12)
     {
         cout<<"a11>a12 -> true.\n";
     }
     else
     {
         cout<<"a11>a12 -> false.\n";
     }



       cout<<"\nOperator >=\n";

     cout<<"\na3= 21-1-2010 & a4= 2-12-2008\n";

      if(a3>=a4)
     {
         cout<<"a3>=a4 -> true.\n";
     }
     else
     {
         cout<<"a3>=a4 -> false.\n";
     }


     cout<<"\na5= 1-2-2010 & a6= 1-2-2010\n";
     Date a5("1-2-2010");
     Date a6("1-2-2010");

      if(a5>=a6)
     {
         cout<<"a5>=a6 -> true.\n";
     }
     else
     {
         cout<<"a5>=a6 -> false.\n";
     }


     cout<<"\nOperator <=\n";

     cout<<"\na3= 21-1-2010 & a4= 2-12-2008\n";

      if(a3<=a4)
     {
         cout<<"a3<=a4 -> true.\n";
     }
     else
     {
         cout<<"a3<=a4 -> false.\n";
     }


     cout<<"\na15= 12-2-2010 & a16= 12-2-2010\n";
     Date a15("12-2-2010");
     Date a16("12-2-2010");

      if(a15<=a16)
     {
         cout<<"a15<=a16 -> true.\n";
     }
     else
     {
         cout<<"a15<=a16 -> false.\n";
     }



     cout<<"\nEnter 2 dates for comparison (t5 & t6)\n";

     Date t5,t6;
     cout<<"Date t5:\n";
     i=0;
     while(i==0){
     try{i=1;cin>>t5;}    //using the explicit istream operator and overloaded constructor1 of Date class

      catch(invalid_argument& f1)
      {cout<<f1.what();i=0;}
      catch(out_of_range& ff1)
	   {cout<<ff1.what();i=0;}
      catch(domain_error& fff1)
       {cout<<fff1.what();i=0;}


      if(i==0)
      cout<<"Please try again..\n";

      if(i==1)
      {
        cout<<"Date (t5): ";
        cout<<t5;       //usage of explicit ostream operator of class Date
        cout<<"\nDate successfully created !!\n\n";}

     }//end of while


     cout<<"Date t6:\n";

     i=0;
     while(i==0){
     try{i=1;cin>>t6;}    //using the explicit istream operator and overloaded constructor1 of Date class

      catch(invalid_argument& g1)
      {cout<<g1.what();i=0;}
      catch(out_of_range& gg1)
	   {cout<<gg1.what();i=0;}
      catch(domain_error& ggg1)
       {cout<<ggg1.what();i=0;}


      if(i==0)
      cout<<"Please try again..\n";

      if(i==1)
      {
        cout<<"Date (t6): ";
        cout<<t6;       //usage of explicit ostream operator of class Date
        cout<<"\nDate successfully created !!\n\n";}

     }//end of while


     //operator==
     cout<<"Operator (=) :\n";

     if(t5==t6)
     {
         cout<<"t5=t6 -> true.\n";
     }
     else
     {
         cout<<"t5=t6 -> false.\n";
     }


     //operator!=
     cout<<"Operator (!=) :\n";

     if(t5!=t6)
     {
         cout<<"t5!=t6 -> true.\n";
     }
     else
     {
         cout<<"t5!=t6 -> false.\n";
     }


     //operator<
     cout<<"Operator (<) :\n";

     if(t5<t6)
     {
         cout<<"t5<t6 -> true.\n";
     }
     else
     {
         cout<<"t5<t6 -> false.\n";
     }


    //operator>
    cout<<"Operator (>) :\n";

     if(t5>t6)
     {
         cout<<"t5>t6 -> true.\n";
     }
     else
     {
         cout<<"t5>t6 -> false\n";
     }


     //operator<=
     cout<<"Operator (<=) :\n.";

     if(t5<=t6)
     {
         cout<<"t5<=t6 -> true\n";
     }
     else
     {
         cout<<"t5<=t6 -> false\n";
     }


     //operator>=
      cout<<"Operator (>=) :\n";

     if(t5>=t6)
     {
         cout<<"t5>=t6 -> true\n";
     }
     else
     {
         cout<<"t5>=t6 -> false\n";
     }

    cout<<"\nLets check out the cast operators. Press enter to continue.\n";
    getch();
    //CAST OPERATORS

    cout<<"\nCAST OPERATORS \n";

    cout<<"Lets take Date td: 12-4-2010 ";
    Date td("12-4-2010");

    cout<<"\nMonth cast operator:\n";

    Month ab;

    ab=td;       //MONTH CAST OPERATOR USED


    if(ab==1)cout<<"January\n";
    if(ab==2)cout<<"February\n";
    if(ab==3)cout<<"March\n";
    if(ab==4)cout<<"April\n";
    if(ab==5)cout<<"May\n";
    if(ab==6)cout<<"June\n";
    if(ab==7)cout<<"July\n";
    if(ab==8)cout<<"August\n";
    if(ab==9)cout<<"September\n";
    if(ab==10)cout<<"October\n";
    if(ab==11)cout<<"November\n";
    if(ab==12)cout<<"December\n";

   cout<<"\nLets take another date dy= 1-7-2016";
   Date dy("1-7-2016");

    Month ab1;
    cout<<"\nMonth cast operator:\n";


    ab1=dy;       //MONTH CAST OPERATOR USED

    if(ab1==1)cout<<"January\n";
    if(ab1==2)cout<<"February\n";
    if(ab1==3)cout<<"March\n";
    if(ab1==4)cout<<"April\n";
    if(ab1==5)cout<<"May\n";
    if(ab1==6)cout<<"June\n";
    if(ab1==7)cout<<"July\n";
    if(ab1==8)cout<<"August\n";
    if(ab1==9)cout<<"September\n";
    if(ab1==10)cout<<"October\n";
    if(ab1==11)cout<<"November\n";
    if(ab1==12)cout<<"December\n";


    cout<<"\nLets take another date dy1= 12-12-1976";
    Date dy1("12-12-1976");

    cout<<"\nMonth cast operator:\n";


    ab1=dy1;       //MONTH CAST OPERATOR USED

    if(ab1==1)cout<<"January\n";
    if(ab1==2)cout<<"February\n";
    if(ab1==3)cout<<"March\n";
    if(ab1==4)cout<<"April\n";
    if(ab1==5)cout<<"May\n";
    if(ab1==6)cout<<"June\n";
    if(ab1==7)cout<<"July\n";
    if(ab1==8)cout<<"August\n";
    if(ab1==9)cout<<"September\n";
    if(ab1==10)cout<<"October\n";
    if(ab1==11)cout<<"November\n";
    if(ab1==12)cout<<"December\n";




    //WEEKDAY CAST OPERATOR
    cout<<"\n\nWeekDay cast operator  :\n\n";
    cout<<"Lets take Date p5: 4-1-2016";
    Date p5("4-1-2016");

    WeekDay dg;

    dg=p5; // cast operator WeekDay getting invoked

    cout<<"\nWeekday= ";
    if(dg==1)cout<<"Monday\n";
    if(dg==2)cout<<"Tuesday\n";
    if(dg==3)cout<<"Wednesday\n";
    if(dg==4)cout<<"Thursday\n";
    if(dg==5)cout<<"Friday\n";
    if(dg==6)cout<<"Saturday\n";
    if(dg==7)cout<<"Sunday\n";


    cout<<"\nLets take Date p6: 12-4-2015";
    Date p6("12-4-2015");

    WeekDay dg1;

    dg1=p6; // cast operator WeekDay getting invoked

    cout<<"\nWeekday= ";
    if(dg1==1)cout<<"Monday\n";
    if(dg1==2)cout<<"Tuesday\n";
    if(dg1==3)cout<<"Wednesday\n";
    if(dg1==4)cout<<"Thursday\n";
    if(dg1==5)cout<<"Friday\n";
    if(dg1==6)cout<<"Saturday\n";
    if(dg1==7)cout<<"Sunday\n";


     cout<<"\nLets take Date p7: 20-3-2011";
    Date p7("20-3-2011");

    dg1=p7; // cast operator WeekDay getting invoked

    cout<<"\nWeekday= ";
    if(dg1==1)cout<<"Monday\n";
    if(dg1==2)cout<<"Tuesday\n";
    if(dg1==3)cout<<"Wednesday\n";
    if(dg1==4)cout<<"Thursday\n";
    if(dg1==5)cout<<"Friday\n";
    if(dg1==6)cout<<"Saturday\n";
    if(dg1==7)cout<<"Sunday\n";



    //WEEK NUMBER CAST OPERATOR
    cout<<"\nWeekNumber cast operator  :\n\n";
    cout<<"Lets take Date k5: 6-1-2016 ";
    Date k5("6-1-2016");


    WeekNumber d1;

    d1=k5;     //cast operator WeekNumber getting invoked

    cout<<"\nWeek Number= "<<d1<<endl;


    cout<<"\nLets take Date k15: 2-1-2016 ";
    Date k15("2-1-2016");


    WeekNumber d11;

    d11=k15;     //cast operator WeekNumber getting invoked

    cout<<"\nWeek Number= "<<d11<<endl;



    cout<<"\nLets take Date k18: 12-4-2010 ";
    Date k18("12-4-2010");


    WeekNumber d14;

    d14=k18;     //cast operator WeekNumber getting invoked

    cout<<"\nWeek Number= "<<d14<<endl;


    cout<<"\nLets go to user's choice.. Press enter to continue.\n";
    getch();


    cout<<"\n\n  USER'S CHOICE OF OPERATORS\n\n";

      // User choice of operators and functions
     Date t7;

     cout<<"Create a new date (t7) to test any of the operators and functions of class Date: \n";


     i=0;
     while(i==0){

     try{i=1;cin>>t7;}    //using the explicit istream operator and overloaded constructor1 of Date class

      catch(invalid_argument& f1)
      {cout<<f1.what();i=0;}
      catch(out_of_range& ff1)
	   {cout<<ff1.what();i=0;}
      catch(domain_error& fff1)
       {cout<<fff1.what();i=0;}


      if(i==0)
      cout<<"Please try again..\n";

      if(i==1)
      {
        cout<<"Date (t7): ";
        cout<<t7;       //usage of explicit ostream operator of class Date
        cout<<"\nDate successfully created !!\n\n";}

     }


     Date t8;

     cout<<"Create a new date (t8) for comparison purposes : \n";


     i=0;
     while(i==0){
     try{i=1;

       cin>>t8;}    //using the explicit istream operator and overloaded constructor1 of Date class

      catch(invalid_argument& f1)
      {cout<<f1.what();i=0;}
      catch(out_of_range& ff1)
	   {cout<<ff1.what();i=0;}
      catch(domain_error& fff1)
       {cout<<fff1.what();i=0;}


      if(i==0)
      cout<<"Please try again..\n";

      if(i==1)
      {
        cout<<"Date (t8): ";
        cout<<t8;       //usage of explicit ostream operator of class Date
        cout<<"\nDate successfully created !!\n\n";}

     }


    char ch;

    cout<<"List of relational operators related to Date class:\n";
    cout<<"-------------------------------------------------------\n";
    cout<<"1. leapyear() function on t7\n";
    cout<<"2. equal to operator(==)\n";
    cout<<"3. not equal to operator(!=)\n";
    cout<<"4. greater than operator(>)\n";
    cout<<"5. less than operator(<)\n";
    cout<<"6. less than or equal to operator(<=)\n";
    cout<<"7. greater than or equal to operator(>=)\n";


    int sp;


    do{
         cout<<"\nEnter the index (1-7) of your choice in the list\n";
         cin>>sp;
         cout<<"\n";

         switch(sp)
         {
                  //leapYear
              case 1: cout<<"LeapYear():\n";
                     cout<<"t7= "<<t7<<" is ";
                     if(t7.leapYear()==true)
                     cout<<"a leap year.\n";
                      else
                          cout<<"not a leap year.\n";


                        break;



              case 2:   cout<<"Operator ==\n";
                         cout<<"t7= "<<t7<<endl;
                         cout<<"t8= "<<t8<<endl;
                         if(t7==t8)
                             cout<<"t7=t8 ->true\n";
                         else
                             cout<<"t7=t8 ->false\n";
                         break;


              case 3:  cout<<"Operator !=\n";
                         cout<<"t7= "<<t7<<endl;
                         cout<<"t8= "<<t8<<endl;
                         if(t7!=t8)
                             cout<<"t7!=t8 ->true\n";
                         else
                             cout<<"t7!=t8 ->false\n";
                         break;


              case 4:  cout<<"Operator >\n";
                         cout<<"t7= "<<t7<<endl;
                         cout<<"t8= "<<t8<<endl;
                         if(t7>t8)
                             cout<<"t7>t8 ->true\n";
                         else
                             cout<<"t7>t8 ->false\n";
                         break;


              case 5:  cout<<"Operator <\n";
                         cout<<"t7= "<<t7<<endl;
                         cout<<"t8= "<<t8<<endl;
                         if(t7<t8)
                             cout<<"t7<t8 ->true\n";
                         else
                             cout<<"t7<t8 ->false\n";
                         break;


              case 6:  cout<<"Operator <=\n";
                         cout<<"t7= "<<t7<<endl;
                         cout<<"t8= "<<t8<<endl;
                         if(t7<=t8)
                             cout<<"t7<=t8 ->true\n";
                         else
                             cout<<"t7<=t8 ->false\n";
                         break;


              case 7:  cout<<"Operator >=\n";
                         cout<<"t7= "<<t7<<endl;
                         cout<<"t8= "<<t8<<endl;
                         if(t7>=t8)
                             cout<<"t7>=t8 ->true\n";
                         else
                             cout<<"t7>=t8 ->false\n";
                         break;



          default: cout<<"Invalid input !!\n";


         }
         //end of switch()


        cout<<"Enter Y to test another operator/function.\n";
        cin>>ch;

    }while(ch=='y'||ch=='Y');
    //end of do while loop


  cout<<"                End of TestDate()\n                PRESS ENTER TO EXIT..\n\n";
  getch();

}
//end of the function TestDate()



int main()
{   cout<<" ---------------------------TestDate() Implementation-------------------------\n(A kind remainder: Dont use '/' in dates/dateformats. Use '-'.)\n\n";
    TestDate();
    return 0;
}
