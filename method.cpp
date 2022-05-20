
void User::setUserDetails(string Email,string Uname, string Pword)
{
 Email=Email;
 Username=Uname;
 Password=Pword;
}
void User::registerUser()
{
 cout<<"email="<<Email<<endl
     <<"Username"<<Username<<endl
     <<"password"<<Password<<endl<<endl;
}

void App::setAppDetails(int AID,string Aname, string Atype)
{
 AppID=AID;
 Appname=Aname;
 Apptype=Atype;
}
void App::displayApp()
{
 cout<<"Appid="<<AppID<<endl
     <<"Appname"<<Appname<<endl
     <<"Apptype"<<Apptype<<endl<<endl;
}

void Payment::setPaymentDetails(int PID,string Ptype)
{
 paymentID=PID;
 paymentType=Ptype;
}
void payment::Payment()
{
 cout<<"PaymentID="<<paymentID<<endl
     <<"PaymentType"<<paymentType<<endl<<endll;
}

void Download::setDownloadDetails(int DID,string Dtype)
{
 downloadID=DID;
 downloadType=Dtype;
}
void Download::Download()
{
 cout<<"DownlaodID="<<downloadID<<endl
     <<"DownloadType"<<DownlaodType<<endl<<endll;
}
