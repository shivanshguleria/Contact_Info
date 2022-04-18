#include <stdio.h>

unsigned long long int  phone[10];                    //Initialising array

int main()
{
    int user,pwd,codes,menu;
    phone[0] = 4447432558;                          //Giving Array Values
    phone[1] = 4427417000;
    phone[2] = 8056016611;
    phone[3] = 4427453159;
    phone[4] = 8056016612;
    phone[5] = 8056016614;
    phone[6] = 8056016615;
    phone[7] = 4427414728;
    phone[8] = 7305546636;
    phone[9] = 7305546636;


printf("Welcome to Contact Informations\n");

printf("|~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("|   CONTACTS INFORMATION  |\n");                                                 //MENU INSTRUCTIONS
printf("|~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("\n\n");
printf("|~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("|--1--SRM HOSPITAL        |\n|--2--INFORMATION CENTRE  |\n|--3--PAARI HOSTEL        |\n|--4--OORI HOSTEL         |\n");
printf("|--5--KAARI HOSTEL        |\n|--6--ADHIYAMAN HOSTEL    |\n|--7--NELSON MANDELLA     |\n|--8--M BLOCK             |\n");
printf("|--9--ESQ A BLOCK         |\n|--10--ESQ B BLOCK        |\n|~~~~~~~~~~~~~~~~~~~~~~~~~|\n");


printf("Enter Number Code-- ");
scanf("%d",&codes);                              //TAKING INPUT
switch(codes)                                                      
{
  case 1:
  printf("Phone Number -- %lld\n",phone[0]);
  break;
  case 2:                                                        
  printf("Phone Number -- %lld\n",phone[1]);
  break;
  case 3:
  printf("Phone Number -- %lld\n",phone[2]);
  break;
  case 4:
  printf("Phone Number -- %lld\n",phone[3]);
  break;
  case 5:
  printf("Phone Number -- %lld\n",phone[4]);
  break;
  case 6:
  printf("Phone Number -- %lld\n",phone[5]);
  break;
  case 7:
  printf("Phone Number -- %lld\n",phone[6]);
  break;
  case 8:
  printf("Phone Number -- %lld\n",phone[7]);
  break;
  case 9:
  printf("Phone Number -- %lld\n",phone[8]);
  break;
  case 10:
  printf("Phone Number -- %lld\n",phone[9]);
  break;
}

printf("Enter Your Options--");
scanf("%d",&menu);
if(menu == 1){
printf("Enter User ID -- ");                                     //LOGIN OPTIONS(under development)
scanf("%d",&user);
printf("Password -- ");
scanf("%d",&pwd);

if(user == 123 && pwd == 001)
{printf("Login Successfull\n");

}
else{printf("Login Failed");};
}
else printf("Bye-Bye");
return 0;

}
