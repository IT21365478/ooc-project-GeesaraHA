#include"User.h"
#include"App.h"
#include"Payment.h"
#include"Download.h"
#include"Report.h"
#include <iostream>
using namespace std;
int main() {
  User*U1=new User("j01@gmail","tharidu","thair45");
  User*U2=new User("n01@gmail","gayan","gaiya5");
  App*A1=new App(001,"cargame","game");
  App*A2=new App(002,"Nsongs","music");
  Payment*P1=new Payment(101,"debitcard");
  Payment*P2=new Payment(102,"creditcard");
  Download*D1=new Download(100,"Free");
  Download*D2=new Download(200,"buy");
  
  
}
