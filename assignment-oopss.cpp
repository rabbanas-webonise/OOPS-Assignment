#include <iostream>
 
using namespace std;

// Base class mobile
class Mobile { 
   public:
     void sendmsgs();
     void sendmms();
     void makecall();
     
      
   public:
      
      int campix,frontcampix;
      string simcard;
      
};
class Android:public Mobile
{
  public:
  string display,screenglass;

     void bluetooth();
     void Display();
};
class Ios:public Mobile
{
    void apple_pay();
    void Apple_palystore();
};


// Derived class
class Samsung: public Android
{
   public:
    string internet;
   Samsung()
   {
     campix=8;
     simcard="dual";
     internet="3G";
     string display="touch screen";
   }
       void sendmsgs()
       {
         cout<< "send messages list"<<endl;
       }
        void Cam(int campix)
      {
        cout <<" back Camera Pixel = "<<campix<< endl;
      }
      void Sim() {
         cout <<simcard<<" Sim "<< endl; 
      }
      void Internet()
      {
         cout <<internet<<" Internet connection "<< endl; 
      }
      void Display()
      {
        cout<<display<<" display"<<endl;
      }
};
class MI: public Android
{
   public:
   string internet;

   MI()
   {
     campix =13;
     simcard="dual";
     internet="3G";
     frontcampix=8;
     display="gorila";
     screenglass="6inc";
   }
     void Cam(int campix,int frontcampix)
      {
        cout <<"back  Camera Pixel  = "<<campix<<"  front  Camera Pixel  = "<<frontcampix<< endl;
      }
   void Sim() {
         cout <<simcard<<" Sim "<< endl; 
      }
      void Internet() 
      {
         cout <<"Internet connectoin is "<<internet<< endl; 
      }
            void Display(string display,string screenglass)
      {
        cout<<display<<"screen display "<<screenglass<<" screen glass "<<endl;
      }
      void bluetooth()
      {
        cout<<"Activate Buletooth  "<<endl;
      }

};
class Apple: public Ios
{
   public:

   string internet;
   Apple()
   {
     campix =20;
     frontcampix =14;
     simcard="single";
     internet="4G";
     
   }
   void makecall()
   {
     cout <<"dial number "<<endl;
   }
     void Cam(int campix,int frontcampix)
      {
        cout <<"back Camera Pixel = "<<campix<<" front Camera Pixel = "<<frontcampix<< endl;
      }
    void Sim() {
         cout <<simcard<<" Sim "<< endl; 
      }
      void Internet() 
      {
         cout <<"Internet connectoin is"<<internet<< endl; 
      }
      void sendmms()
      {
        cout<<"send mms list"<<endl;
      }
      void Apple_palystore()
      {
        cout<<"apple games and music store"<<endl;
      }
      void apple_pay()
      {
        cout<<"pay through apple pay"<<endl;
      }
};

int main(void) {
   Samsung sam;
   MI mi;
   Apple ap;
   int option;
   char op;
   
 
  
cout << "Select Any Mobile: "  << endl;
 cout << "1. Samsung Mobile "  << endl; 
 cout << "2. MI Mobile "  << endl;
 cout << "3. Apple Mobile "  << endl; 
 cout << "4. Exit "  << endl; 
 cout << "Enter Your Choice***: "  << endl;
 cin >> option;

 switch(option)
 {
   while(true){
     case 1: cout<<"Select Any Samsung Feature\n"<<"A.camera\n"<<"B.Netconnection\n"<<"C.Display\n"<<"D.Simcard\n"<<"E.Exit\n"<<"Enter your Choice\n\n\n"<<endl;
      
             cin>>op;
          
             switch(op)
             {
                 case 'a':
                 case 'A':
                          sam.Cam(sam.campix);
                           break;
                 case 'b':
                 case 'B':
                           sam.Internet();
                           break;                           

                 case 'c':                           

                 case 'C':
                           sam.Display();
                           break;
                 case 'd':
                 case 'D':
                           sam.Sim();
                           break;
                 case 'e':
                 case 'E':exit(0);
                           break;
                        
             }
           
 }                
       break;    
       while(true){ 
    case 2: 
    cout<<"Select Any MI Feature\n"<<"A.camera\n"<<"B.Internet\n"<<"C.Display\n"<<"D.Simcard\n"<<"E.Exit\n"<<"Enter your Choice\n"<<endl;
             cin>>op;
             
             switch(op)
             {
                 case 'a':
                 case 'A':
                          mi.Cam(mi.campix,mi.frontcampix);
                           break;
                 case 'b':
                 case 'B':
                           mi.Internet();
                           break;
                 case 'c':
                 case 'C':
                           mi.Display(mi.display,mi.screenglass);
                           break;
                case 'd':
                 case 'D':
                           mi.Sim();
                           break;
                  case 'e':
                  case 'E':exit(0);
                          break;      
             }
              
              

 }break;

 while(true){
     case 3: cout<<"Select Any Apple Feature\n"<<"A.camera\n"<<"B.Netconnection\n"<<"C.Makecall List\n"<<"D.Simcard\n"<<"E.Send MMS\n"<<"F.Apple Play Store"<<"G. Apple pay"<<"E.Exit\n"<<"Enter your Choice\n\n\n"<<endl;
      
             cin>>op;
          
             switch(op)
             {
                 case 'a':
                 case 'A':
                          ap.Cam(ap.campix,ap.frontcampix);
                           break;
                 case 'b':
                 case 'B':
                           ap.Internet();
                           break;                           

                 case 'c':                           

                 case 'C':
                           ap.makecall();
                           break;
                 case 'd':
                 case 'D':
                           ap.Sim();
                           break;
                 case 'e':
                 case 'E':
                           ap.sendmms();
                           break;
                  case 'f':
                 case 'F':
                           ap.Apple_palystore();
                           break;
                case 'g':
                 case 'G':
                           ap.apple_pay();
                           break;
                 case 'h':
                 case 'H':exit(0);
                           break;
                        
             }
           
 }                
       break;    
 }
   
   

   return 0;
}