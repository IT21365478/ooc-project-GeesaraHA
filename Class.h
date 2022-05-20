#include <iostream>
using namespace std;

class User{
private :
 string Email;
 string Username;
 string Password;

public:
 setUserDetails(string Email,string Uname,string Pword);
 registerUser();
}

class App{
private :
 int AppID;
 string Appname;
 string Apptype;

public:
 setAppDetails(int AID,string Aname,string Atype);
 displayApp();
}

class Payment{
private :
 int paymentID;
 string paymentType;

public:
 setPaymentDetails(int PID,string Ptype);
 Payment();
}

class Download{
private :
 int downloadID;
 string downloadType;

public:
 setDownloadDetails(int DID,string Dtype);
 downloadApp();
}

class Report{
private :
 int reportID;
 string description;

public:
 setReportDetails(int RID,string Desc);
 displayReport();
}
