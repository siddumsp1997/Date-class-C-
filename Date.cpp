#include "Date.h"

#include <iostream>
#include <cstdlib>
#include <exception>
#include <cstring>
#include <ctime>
#include <cmath>
#include <stdexcept>
#include <sstream>
#include <iomanip>


//FUNCTIONS OF DATEFORMAT CLASS

//For accessing the dateformat
char* DateFormat::getdate()
{
	return dateFormat;

}

//For accessing the monthformat
char* DateFormat::getmonth()
{
	return monthFormat;

}

//For accessing the yearformat
char* DateFormat::getyear()
{
	return yearFormat;

}

//Default constructor
DateFormat::DateFormat()
{
    dateFormat = new char[3];
    monthFormat = new char[4];
    yearFormat = new char[3];
	strcpy(this->dateFormat,"dd");
	strcpy(this->monthFormat,"mmm");
	strcpy(this->yearFormat,"yy");


}



//overloaded constructor 1
DateFormat::DateFormat(const char* dateFormat1, const char* monthFormat1, const char* yearFormat1)
{

    dateFormat = new char[3];
    monthFormat = new char[4];
    yearFormat = new char[5];

    if((strcmp(dateFormat1,"dd")==0)||(strcmp(dateFormat1,"d")==0)||(strcmp(dateFormat1,"0")==0))
	{
	 strcpy(dateFormat,dateFormat1);
    }
	else
	{
		throw invalid_argument("Invalid format error !!\n");
	}



	if((strcmp(monthFormat1,"m")==0)||(strcmp(monthFormat1,"mm")==0)||(strcmp(monthFormat1,"mmm")==0)||(strcmp(monthFormat1,"0")==0)){

	strcpy(monthFormat,monthFormat1);}

	else
	{
        throw invalid_argument("Invalid format error !!\n");
	}

	if((strcmp(yearFormat1,"yy")==0)||(strcmp(yearFormat1,"yyyy")==0)||(strcmp(yearFormat1,"0")==0)){

	strcpy(yearFormat,yearFormat1);}

	else
	{
		throw invalid_argument("Invalid format error !!\n");
	}


}

//COPY ASSIGNMENT OPERATOR
DateFormat& DateFormat::operator=(const DateFormat& x)
{

    strcpy(dateFormat,x.dateFormat);
    strcpy(monthFormat,x.monthFormat);
    strcpy(yearFormat,x.yearFormat);

     return *this;
}


//overloaded constructor 2
DateFormat::DateFormat(const char* a)
{

    dateFormat = new char[3];
    monthFormat = new char[4];
    yearFormat = new char[5];

	if(a[0]=='d')
	{
		if(a[1]=='d')
		{
			strcpy(dateFormat,"dd");

			if(a[3]=='m'&&a[4]=='-')
			{
			  strcpy(monthFormat,"m");

			  if(a[5]=='y'&&a[6]=='y'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  else if(a[5]=='0'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }


			  else if(a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			  	throw invalid_argument("Invalid dateformat error !!\n");
			  }


			}

			else if(a[3]=='0'&&a[4]=='-')
			{
			  strcpy(monthFormat,"0");

			  if(a[5]=='y'&&a[6]=='y'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  else if(a[5]=='0'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			  	throw invalid_argument("Invalid dateformat error !!\n");
			  }


			}

			else if(a[3]=='m'&&a[4]=='m'&&a[5]=='-')
			{
			  strcpy(monthFormat,"mm");

			   if(a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  else if(a[6]=='0'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='y'&&a[10]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }
			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			  	throw invalid_argument("Invalid dateformat error!!\n");
			  }

			}

	    	else if(a[3]=='m'&&a[4]=='m'&&a[5]=='m'&&a[6]=='-')
			{
			  strcpy(monthFormat,"mmm");

			   if(a[7]=='y'&&a[8]=='y'&&a[9]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  else if(a[7]=='0'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }


			  else if(a[7]=='y'&&a[8]=='y'&&a[9]=='y'&&a[10]=='y'&&a[11]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }
			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			  	throw invalid_argument("Invalid dateformat error!!\n");
			  }

			}
			//if no proper monthFormat
			else
			{
				//throw error
                throw invalid_argument("Invalid dateformat error !!\n");
			}


		}
		else if(a[1]=='-')
		{
			strcpy(dateFormat,"d");

			if(a[2]=='m'&&a[3]=='-')
			{
			  strcpy(monthFormat,"m");

			  if(a[4]=='y'&&a[5]=='y'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			   else if(a[4]=='0'&&a[5]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[4]=='y'&&a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error !!\n");
			  }


			}


            else if(a[2]=='0'&&a[3]=='-')
			{
			  strcpy(monthFormat,"0");

			  if(a[4]=='y'&&a[5]=='y'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			   else if(a[4]=='0'&&a[5]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[4]=='y'&&a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error !!\n");
			  }


			}



			else if(a[2]=='m'&&a[3]=='m'&&a[4]=='-')
			{
			  strcpy(monthFormat,"mm");

			   if(a[5]=='y'&&a[6]=='y'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  else if(a[5]=='0'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error!!\n");
			  }

			}

	    	else if(a[2]=='m'&&a[3]=='m'&&a[4]=='m'&&a[5]=='-')
			{
			  strcpy(monthFormat,"mmm");

			   if(a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			   else if(a[6]=='0'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }


			  else if(a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='y'&&a[10]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }
			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid argument error !!\n");
			  }

			}

			//if no proper monthFormat
			else
			{
				//throw error
				throw invalid_argument("Invalid argument error !!\n");
			}

		}

		else
			{
				//throw error
				throw invalid_argument("Invalid argument error !!\n");
			}


	}

    else if(a[0]=='0')
    {

         if(a[1]=='-')
		{
			strcpy(dateFormat,"0");

			if(a[2]=='m'&&a[3]=='-')
			{
			  strcpy(monthFormat,"m");

			  if(a[4]=='y'&&a[5]=='y'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			   else if(a[4]=='0'&&a[5]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[4]=='y'&&a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error !!\n");
			  }


			}

			else if(a[2]=='0'&&a[3]=='-')
			{
			  strcpy(monthFormat,"0");

			  if(a[4]=='y'&&a[5]=='y'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  else if(a[4]=='0'&&a[5]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }


			  else if(a[4]=='y'&&a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error !!\n");
			  }


			}

			else if(a[2]=='m'&&a[3]=='m'&&a[4]=='-')
			{
			  strcpy(monthFormat,"mm");

			   if(a[5]=='y'&&a[6]=='y'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			  if(a[5]=='0'&&a[6]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }

			  else if(a[5]=='y'&&a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }

			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error!!\n");
			  }

			}

	    	else if(a[2]=='m'&&a[3]=='m'&&a[4]=='m'&&a[5]=='-')
			{
			  strcpy(monthFormat,"mmm");

			   if(a[6]=='y'&&a[7]=='y'&&a[8]=='\0')
			  {
			  	strcpy(yearFormat,"yy");
			  }

			   if(a[6]=='0'&&a[7]=='\0')
			  {
			  	strcpy(yearFormat,"0");
			  }


			  else if(a[6]=='y'&&a[7]=='y'&&a[8]=='y'&&a[9]=='y'&&a[10]=='\0')
			  {
			  	strcpy(yearFormat,"yyyy");
			  }
			  //if no proper yearFormat
			  else
			  {
			  	//throw error
			 	throw invalid_argument("Invalid dateformat error !!\n");
			  }

			}

			//if no proper monthFormat
			else
			{
				//throw error
				throw invalid_argument("Invalid dateformat error !!\n");
			}

		}



        else
			{
				//throw error
				throw invalid_argument("Invalid dateformat error !!\n");
			}



    }
	//if no proper dateFormat
	else
	{
		//throw error
		throw invalid_argument("Invalid argument error !!\n");
	}



}
//end of overloaded constructor 2


//Destructor for DateFormat class
DateFormat::~DateFormat(){
    delete[] dateFormat;
    delete[] monthFormat;
    delete[] yearFormat;
    }




//FUNCTIONS OF DATE CLASS

//static variable of date class
DateFormat Date::format;

//Getters and Setters

//date format setting function
 void Date::setFormat(DateFormat& x)
{
   cout<<"setFormat() function invoked."<<endl;
   format=x;

}


//Destructor for Date class
Date::~Date(){
}

//getting the date format
 DateFormat& Date::getFormat()
{
	return format;
}


//overloaded constructor 1
Date::Date(Day d, Month m, Year y) // Construct a Date from (d, m, y)
{

	if(d>31||d<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}

	if(m>12||m<1)
	{
		throw invalid_argument("Invalid argument error!!\n");  //invalid argument exception
	}

	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m==2)
	{

	    if(d==30||d==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}

	if(d==31)
    {

        if(m==2||m==4||m==6||m==9||m==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }

    day=d;
	month=m;
	year=y;

}
//end of constructor


Date::Date()
{

	 time_t now = time(0);

     tm *ltm = localtime(&now);

     if(1900 + ltm->tm_year<1950||1900 + ltm->tm_year>2049)
     {
      throw out_of_range("Out of range error !!\n");   // out of range exception
	 }

	 if(1+ltm->tm_mon==2)
	 {
	 	if(ltm->tm_mday==30||ltm->tm_mday==31)
	 	throw domain_error("Domain error !!\n"); //domain error exception

	 	if(ltm->tm_mday==29)
	 	{
	 		if((1900 + ltm->tm_year)%4!=0)
	 		throw domain_error("Domain error !!\n");

		 }
	 }


     this->year = 1900 + ltm->tm_year;
     this->month= (Month)(1 + ltm->tm_mon);
     this->day=(Day)ltm->tm_mday;


}
//end of default constructor


//overloaded constructor2
// date in string format -- to be parsed as static format member
 Date::Date(const char* date12)
{
   char date1[13];

   strcpy(date1,date12);

   int i,x1,x2,n; x1=x2=-1;

   string input;
   int d1,m1,y1;

   int len=strlen(date1);

   for(i=0;i<len;i++)
   {
    if(date1[i]=='-')
     {
         if(x1==-1)
         x1=i;

         else
         x2=i;

     }

   }

  if(x1==-1||x2==-1)
  {
      throw invalid_argument("Invalid argument error !!\n");

  }

  else
  {

   //fill this up
    date1[x1]=' ';
    date1[x2]=' ';

    input=date1;

    std::stringstream stream(input);

    i=0;

    while(1) {

   stream >> n;
   if(!stream)
      break;
   if(i==0)
   {
       d1=n;
   }

   if(i==1)
   {
       m1=n;
   }
   if(i==2)
   {
       y1=n;
   }

   i++;
   }//end of while



    if(d1>31||d1<1)
	{
		throw invalid_argument("Invalid argument error!!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error!!\n");  //invalid argument exception
	}

	if(y1<1950||y1>2049)
	{
	    if(y1>=0&&y1<=99)
        {
            //no error
            if(y1>=0&&y1<=49)
             y1=2000+y1;
            if(y1>=50&&y1<=99)
             y1=1900+y1;
        }

	    else{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	    }
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y1%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}
    if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }



    day=(Day)d1;
    month=(Month)m1;
    year=y1;



  }//end of else


}
//end of overloaded constructor



//to get day of the date
Day Date::getd()
{
    return day;
}

//to get month of the date
Month Date::getm()
{
    return month;
}

//to get year of the date
Year Date::gety()
{
    return year;
}


// for setting input variables
void Date::setday(Day x)
 {
 	day=x;
 }

 void Date::setmonth(Month y)
 {
 	month =y;
 }

 void Date::setyear(int z)
 {
 	year=z;
 }



//Copy constructor
Date::Date(const Date& x)
{   //cout<<"Invoking copy constructor of Date class..\n";
	this->day=x.day;
	this->month=x.month;
	this->year=x.year;

}
//end of copy constructor



//copy assignment operator
Date& Date::operator=(const Date& x)
{
	this->day=x.day;
    this->month=x.month;
	this->year=x.year;

	return *this;
}



Date& Date::operator++() // Next day operator
{
    int d1= day;
    int m1= month;
    int y=year;

    std::tm t = {};


    t.tm_year = y-1900;
    t.tm_mon  = m1-1;
    t.tm_mday = d1;
    // modify
    t.tm_mday += 1;
    std::mktime(&t);
    // show result


    y=t.tm_year+1900;
    m1=t.tm_mon+1;
    d1=t.tm_mday;


	if(d1>31||d1<1)
	{
		throw invalid_argument("Out of range error !!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}

	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}

     if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }


	day=(Day)d1;
	month=(Month)m1;
	year=y;

	return *this;

}


 // Same day next week operator
Date& Date::operator++(int)
{

    int d1= day;
    int m1= month;
    int y = year;

    std::tm t = {};
    t.tm_year = y-1900;
    t.tm_mon  = m1-1;
    t.tm_mday = d1;
    // modify
    t.tm_mday += 7;
    std::mktime(&t);
    // show result

    y=t.tm_year+1900;
    m1=t.tm_mon+1;
    d1=t.tm_mday;



	if(d1>31||d1<1)
	{
		throw invalid_argument("Out of range error !!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}

	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}

     if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }



	day=(Day)d1;
	month=(Month)m1;
	year=y;

	return *this;


}

// Previous day operator
Date& Date::operator--()
{
    int d1= day;
    int m1= month;
    int y=year;

    std::tm t = {};
    t.tm_year = y-1900;
    t.tm_mon  = m1-1;
    t.tm_mday = d1;
    // modify
    t.tm_mday -= 1;
    std::mktime(&t);
    // show result

    y=t.tm_year+1900;
    m1=t.tm_mon+1;
    d1=t.tm_mday;


	if(d1>31||d1<1)
	{
		throw invalid_argument("Out of range error !!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}


	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}

	if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }



	day=(Day)d1;
	month=(Month)m1;
	year=y;

	return *this;

}


Date& Date::operator--(int) // Same day previous week
{
    int d1= day;
    int m1= month;
    int y=year;

    std::tm t = {};
    t.tm_year = y-1900;
    t.tm_mon  = m1-1;
    t.tm_mday = d1;
    // modify
    t.tm_mday -= 7;
    std::mktime(&t);
    // show result

    y=t.tm_year+1900;
    m1=t.tm_mon+1;
    d1=t.tm_mday;


	if(d1>31||d1<1)
	{
		throw invalid_argument("Out of range error !!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}


	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }


	}

	if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }




	day=(Day)d1;
	month=(Month)m1;
	year=y;

	return *this;

}


int LeapYearcount(int d1,int m1)
{
    int years = d1;
    int result;

    // Check if the current year needs to be considered
    // for the count of leap years or not
    if (m1 <= 2)
        years--;

    // An year is a leap year if it is a multiple of 4,
    // multiple of 400 and not a multiple of 100.
    result=years / 4 - years / 100 + years / 400;
    return result;
}



unsigned int Date::operator-(const Date& otherDate) // Number of days between otherDate and current date
{
	Date dt1;
	dt1.month=this->month;
	dt1.day=this->day;
	dt1.year=this->year;

    int monthDays[12] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};


    // initialize count using years and day
    long int n1 = (dt1.year-1950)*365 + dt1.day;

    // Add days for months in given date
    for (int i=0; i<dt1.month-1; i++)
        n1=n1+monthDays[i];

    // Since every leap year is of 366 days,
    // Add a day for every leap year
    n1 =n1+LeapYearcount(dt1.year,dt1.month);


    // SIMILARLY, COUNT TOTAL NUMBER OF DAYS BEFORE 'dt2'

    long int n2 = (otherDate.year-1950)*365 + otherDate.day;
    for (int i=0;i<otherDate.month-1;i++)
    n2=n2+ monthDays[i];


    n2=n2+LeapYearcount(otherDate.year,otherDate.month);


    int result=n2-n1;
    // return difference between two counts
    return abs(result);

}



Date Date::operator+(int noOfDays) // Day noOfDays after the current date

{   Date result;

    int d1= day;
    int m1= month;
    int y=year;

    std::tm t = {};
    t.tm_year = y-1900;
    t.tm_mon  = m1-1;
    t.tm_mday = d1;
    // modify
    t.tm_mday += noOfDays;
    std::mktime(&t);
    // show result

    y=t.tm_year+1900;
    m1=t.tm_mon+1;
    d1=t.tm_mday;



	if(d1>31||d1<1)
	{
		throw invalid_argument("Out of range error !!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}

	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}

     if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }


	result.day=(Day)d1;
	result.month=(Month)m1;
	result.year=y;

    return result;

}
//end of + operator implementation



//
Date Date::operator-(int noOfDays) // Day noOfDays after the current date
{

    Date result;

    int d1= day;
    int m1= month;
    int y=year;

    std::tm t = {};
    t.tm_year = y-1900;
    t.tm_mon  = m1-1;
    t.tm_mday = d1;
    // modify
    t.tm_mday -= noOfDays;
    std::mktime(&t);
    // show result

    y=t.tm_year+1900;
    m1=t.tm_mon+1;
    d1=t.tm_mday;



	if(d1>31||d1<1)
	{
		throw invalid_argument("Out of range error !!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error !!\n");  //invalid argument exception
	}

	if(y<1950||y>2049)
	{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}

    if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }


	result.day=(Day)d1;
	result.month=(Month)m1;
	result.year=y;

    return result;


}



//checking equality operator
bool Date::operator==(const Date& otherDate)
{
	if(day==otherDate.day&&month==otherDate.month&&year==otherDate.year)
	{
		return true;
	}

	else
	return false;

}

//checking inequality operator
bool Date::operator!=(const Date& otherDate){

	if(day==otherDate.day&&month==otherDate.month&&year==otherDate.year)
	{
		return false;
	}

	else
	return true;


}

//less than operator
bool Date::operator<(const Date& otherDate)
{
	if(year<otherDate.year)
	return true;

	else if(year>otherDate.year)
	{
	  return false;

	}

	else
	{
		if(month<otherDate.month)
		{
			return true;
		}

		else if(month>otherDate.month)
		{
			return false;
		}

		else
		{
			if(day<otherDate.day)
			{
				return true;
			}

			if(day>otherDate.day)
			{
				return false;
			}

			else
			return false;

		}

	}

}



//less than or equal to operator
bool Date::operator<=(const Date& otherDate)
{
	if(year<otherDate.year)
	return true;

	else if(year>otherDate.year)
	{
	  return false;

	}

	else
	{
		if(month<otherDate.month)
		{
			return true;
		}

		else if(month>otherDate.month)
		{
			return false;
		}

		else
		{
			if(day<otherDate.day)
			{
				return true;
			}

			if(day>otherDate.day)
			{
				return false;
			}

			else
			return true;

		}

	}


}

// greater than operator
bool Date::operator>(const Date& otherDate)
{

	if(year>otherDate.year)
	return true;

	else if(year<otherDate.year)
	{
	  return false;

	}

	else
	{
		if(month>otherDate.month)
		{
			return true;
		}

		else if(month<otherDate.month)
		{
			return false;
		}

		else
		{
			if(day>otherDate.day)
			{
				return true;
			}

			if(day<otherDate.day)
			{
				return false;
			}

			else
			return false;

		}

	}
	//end of outer else
}



//Greater than or equal to operator
bool Date::operator>=(const Date& otherDate)
{

	if(year>otherDate.year)
	return true;

	else if(year<otherDate.year)
	{
	  return false;

	}

	else
	{
		if(month>otherDate.month)
		{
			return true;
		}

		else if(month<otherDate.month)
		{
			return false;
		}

		else
		{
			if(day>otherDate.day)
			{
				return true;
			}

			if(day<otherDate.day)
			{
				return false;
			}

			else
			return true;

		}

	}
	//end of outer else

}


// output streaming operator
 ostream& operator<<(ostream& os, const Date& t1)
 {

 	Date t=t1;

 	if(strcmp(t.getFormat().getdate(),"d")==0)
 	{
 	    os<<t.getd()<<"-";

 	}

 	else if(strcmp(t.getFormat().getdate(),"0")==0)
 	{

       //dont print anything
 	}


 	else
 	{
 	    if(t.getd()>9)
 	    {
 	        os<<t.getd()<<"-";
 	    }
 	    else
 	    {

 	        os<<"0"<<t.getd()<<"-";
 	    }

 	}



 	if(strcmp(t.getFormat().getmonth(),"m")==0)
 	{
 	    os<<t.getm();

 	}


   //mmm case
 	else if(strcmp(t.getFormat().getmonth(),"mmm")==0)
 	{
 	    if(t.getm()==1)os<<"Jan";
 	    if(t.getm()==2)os<<"Feb";
 	    if(t.getm()==3)os<<"Mar";
 	    if(t.getm()==4)os<<"Apr";
 	    if(t.getm()==5)os<<"May";
 	    if(t.getm()==6)os<<"Jun";
 	    if(t.getm()==7)os<<"Jul";
 	    if(t.getm()==8)os<<"Aug";
 	    if(t.getm()==9)os<<"Sep";
 	    if(t.getm()==10)os<<"Oct";
 	    if(t.getm()==11)os<<"Nov";
 	    if(t.getm()==12)os<<"Dec";

 	}
 	//0 case
 	else if(strcmp(t.getFormat().getmonth(),"0")==0)
 	{
 	    if(t.getm()==1)os<<"January";
 	    if(t.getm()==2)os<<"February";
 	    if(t.getm()==3)os<<"March";
 	    if(t.getm()==4)os<<"April";
 	    if(t.getm()==5)os<<"May";
 	    if(t.getm()==6)os<<"June";
 	    if(t.getm()==7)os<<"July";
 	    if(t.getm()==8)os<<"August";
 	    if(t.getm()==9)os<<"September";
 	    if(t.getm()==10)os<<"October";
 	    if(t.getm()==11)os<<"November";
 	    if(t.getm()==12)os<<"December";

 	}


     //mm case
 	 else
 	{
 	    if(t.getm()>9)
 	    {
 	        os<<t.getm();
 	    }
 	    else
 	    {

 	        os<<"0"<<t.getm();
 	    }

 	}


 	if(strcmp(t.getFormat().getyear(),"yy")==0)
 	{  cout<<"-";
 	    if(t.gety()>=2000)
 	    {
 	         if(t.gety()<2010)
 	        os<<"0"<<t.gety()-2000;

 	        else
 	        os<<t.gety()-2000;

         }

        else{
        os<<t.gety()-1900;
          }
 	 }
 	 //0 case
 	 else if(strcmp(t.getFormat().getyear(),"0")==0)
     {

     }

 	else
    {  cout<<"-";
 	   os<<t.gety();
 	}


 	return os;

 }



 //input streaming operator

 istream& operator>>(istream& is, Date& t)
 {
   cout<<"istream operator invoked"<<endl;


   char date1[13];
   cout<<"Enter the date (Allowed formats: Day-d,dd; Month-m,mm; Year-yy,yyyy):\n";
   cin>>date1;

   int i,x1,x2,n; x1=x2=-1;

   string input;
   int d1,m1,y1;

   int len=strlen(date1);

   for(i=0;i<len;i++)
   {
    if(date1[i]=='-')
     {
         if(x1==-1)
         x1=i;

         else
         x2=i;

     }

   }

  if(x1==-1||x2==-1)
  {
      throw invalid_argument("Invalid argument error !!\n");

  }

  else
  {

   //fill this up
    date1[x1]=' ';
    date1[x2]=' ';

    input=date1;

    std::stringstream stream(input);

    i=0;

    while(1) {

   stream >> n;
   if(!stream)
      break;
   if(i==0)
   {
       d1=n;
   }

   if(i==1)
   {
       m1=n;
   }
   if(i==2)
   {
       y1=n;
   }

   i++;
   }//end of while



    if(d1>31||d1<1)
	{
		throw invalid_argument("Invalid argument error!!\n");  //invalid argument exception
	}

	if(m1>12||m1<1)
	{
		throw invalid_argument("Invalid argument error!!\n");  //invalid argument exception
	}

	if(y1<1950||y1>2049)
	{
	    if(y1>=0&&y1<=99)
        {
            //no error
            if(y1>=0&&y1<=49)
             y1=2000+y1;
            if(y1>=50&&y1<=99)
             y1=1900+y1;
        }

	    else{
		throw out_of_range("Out of range error !!\n");   // out of range exception
	    }
	}

	if(m1==2)
	{

	    if(d1==30||d1==31)
		{
		throw domain_error("Domain error !!\n");  //domain error exception
     	}

     	if(d1==29)
     	{
     		if(y1%4!=0)  //Feb 29 is only for leap years
     		{
 		      throw domain_error("Domain error !!\n"); //domain error exception
			}
		 }
	}
    if(d1==31)
    {

        if(m1==2||m1==4||m1==6||m1==9||m1==11)
        {
            throw domain_error("Domain error !!\n"); //domain error exception

        }

    }



    t.day=(Day)d1;
    t.month=(Month)m1;
    t.year=y1;



  }//end of else


   	return is;
 }



//checking whether the given date is in leap year or not
bool Date::leapYear() const
{

	if(year%4==0)
	{
		return true;
	}

	else
	{
		return false;
	}

}




//For getting the date of 1st day of week1
 Date Date::weekone(int year1) {

 // get the date for the 4-Jan for this year
  Date w1((Day)4,(Month)1,year1);
  Date w2;

  WeekDay d;  // for getting the day no of the week : 0==Sunday,1==Monday...... 6==Saturday

  d=w1;       // using cast operator WeekDay()

  if (d==0)
  {
    d=(WeekDay)7;   //Sunday Case
  }

 // return the date of the Monday that is less than or equal to this date
  int fg=1-d;

  w2=w1+fg;    //using the operator+() of date class

  return w2;
}
//end of weekone() function


//CAST OPERATORS
Date::operator WeekNumber() const // Cast to the week number of the year in which the current date falls
{
    int a,b,c,result;

    Date week1;

    Date dd(day,month,year);   // creating a copy of this object

    Date ld((Day)29,(Month)12,year);  // creating another date object for Dec 29 of this year

    int yy= year;



  if(dd>=ld)
    {
    week1 = week1.weekone(yy + 1);
     if (dd<week1)
     {
      week1 =week1.weekone(yy);
     }
     else
     {
      yy++;
     }
    }

  else
  {
    week1=week1.weekone(yy);
    if (dd < week1)
     {
       yy--;
      week1 =week1.weekone(yy);
     }
  }

  a=100*yy;

  b= (dd-week1);  //using the difference operator of Date class

  c=(b/7)+1;

  result=(a+c)%100;


  return (WeekNumber)result;


}
//End of WeekNumber cast operator





 Date::operator Month() const // Cast to the month of the year in which the current date falls
{

   return this->month;

}


 Date::operator WeekDay() const // Cast to the day of the week of the current date
{
  int d1=this->day;
  int m1=this->month;
  int y1=this->year;

  int tt[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
  y1 -= m1 < 3;
  int x=  ( y1 + y1/4 - y1/100 + y1/400 + tt[m1-1] + d1) % 7;

  if(x==0)return Sun;
  if(x==1)return Mon;
  if(x==2)return Tue;
  if(x==3)return Wed;
  if(x==4)return Thr;
  if(x==5)return Fri;
  if(x==6)return Sat;


}
//end of WeekDay() function







