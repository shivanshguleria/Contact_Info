#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    unsigned long long int phone[14];
    int user,pwd,codes;

    phone[0] = 4447432558;
    phone[1] = 4427417000;
    phone[2] = 8056016611;
    phone[3] = 4427453159;
    phone[4] = 8056016612;
    phone[5] = 8056016614;
    phone[6] = 8056016615;
    phone[7] = 4427414728;
    phone[8] = 7305546636;
    phone[9] = 7305546636;
    phone[10] = 7358098805;
    phone[11] = 7358098801;
    phone[12] = 9791938643;
    phone[13] = 7358098820;

for(;codes!=15;)
{
printf("\n\nWelcome to Contact Informations\n");

printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("|---CONTACTS INFORMATION---|\n");
printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("\n\n");
printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
printf("|--1--SRM HOSPITAL         |\n|--2--INFORMATION CENTRE   |\n|--3--PAARI HOSTEL         |\n|--4--OORI HOSTEL          |\n");
printf("|--5--KAARI HOSTEL         |\n|--6--ADHIYAMAN HOSTEL     |\n|--7--NELSON MANDELLA      |\n|--8--M BLOCK              |\n");
printf("|--9--ESQ A BLOCK          |\n|--10--ESQ B BLOCK         |\n|--11--MAINTENANCE SMS/CALL|\n|--12--SECURITY            |\n");
printf("|--13--AMBULANCE           |\n|--14--FIRE                |\n|--15--!!EXIT!!            |\n|~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");

printf("Enter Number Code-- ");
scanf("%d",&codes);
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
  case 11:
  printf("Phone Number -- %lld\n",phone[10]);
  break;
  case 12:
  printf("Phone Number -- %lld\n",phone[11]);
  break;
  case 13:
  printf("Phone Number -- %lld\n",phone[12]);
  break;
  case 14:
  printf("Phone Number -- %lld\n",phone[13]);
  break;
  case 15:

  printf("Sayonara");
  exit(1);
  default:
   printf("Wrong Input");
}}



getch();


}
