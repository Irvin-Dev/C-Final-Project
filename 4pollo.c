#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define Red     "\x1b[31m"
#define Magenta "\x1b[35m"
#define Yellow  "\x1b[33m"
#define Green   "\x1b[32m"
#define Cyan    "\x1b[36m"
#define Blue    "\x1b[34m"
#define Reset   "\x1B[0m"

int MainMenu, Member, Option1, Option2, bw1, bw2, bwResult, Option3, X, Y, Z, A, B, C, voter,START,IncreandDecre,END;
float cel, fah, quiz, ass, project, standing, exam, finalG, ElecBill, LpgKg, Liters, Recycle1, Recycle2, Flight1, Flight2, TOTAL;
float Co2footprintformulapart1, Co2footprintformulapart2, input1, input2, input3, sum, diff, prod, qout, expo, num1, num2, base, height, AREA;
char Start, name[50], age[20], bday[50], add[100], contact[20], email[30], citizen[20], father[50], mother[50], elem[100], jhs[100];
char shs[100], choice1[50], choice2[50], choice3[50], Letter, TryAgain, response1, response2, welcomepage;

int main()
{
    do{
    system("cls");
    printf("\n\t\t_____________________________________________________________________________________  \n");
    printf("\t\t||_________________________________________________________________________________||\n");
    printf("                  "Cyan"110101010101011110101010000101010101110101110101010101101010110110101010101010101\n");
    printf("\t\t  110111010111110000101010000110110101110101001010110101010101010000101010111101011"Reset"\n\n");
    printf("\t\t          "Yellow"444444444"Reset" 10101000         1101"Cyan"0101"Reset"    1111     1101        0111"Cyan"1110"Reset"    \n");
    printf("\t\t         "Yellow"4444444444"Reset" 1111  1010     0011    "Cyan"0100"Reset"  1011     0001      0101    "Cyan"1010 "Reset" \n");
    printf("\t\t        "Yellow"4444   4444"Reset" 1001    1010  1010      "Cyan"1001"Reset" 1011     1001     1101      "Yellow"4"Cyan"001"Reset" \n");
    printf("\t\t       "Yellow"4444    4444"Reset" 1110     1001 1011      "Cyan"1101"Reset" 0011     1001     0010      "Yellow"44"Reset""Cyan"11"Reset" \n");
    printf("\t\t      "Yellow"4444     4444"Reset" 1101     1001 1101      "Cyan"0001"Reset" 0101     1111     1000      "Yellow"444"Reset""Cyan"1"Reset" \n");
    printf("\t\t     "Yellow"4444      4444"Reset" 1101     1101 1101      "Cyan"0001"Reset" 0001     1001     1000      "Yellow"4444"Reset" \n");
    printf("\t\t    "Yellow"4444       4444"Reset" 1000    1110  1011      "Cyan"0001"Reset" 1011     1111     1010      "Yellow"44444"Reset" \n");
    printf("\t\t  "Yellow"44444444444444444444444444444444"Reset"1001"Yellow"44444444444444444444444444444"Reset"1010"Yellow"444444444444"Reset" \n");
    printf("\t\t  "Yellow"44444444444444444444444444444444"Reset"1010"Yellow"44444444444444444444444444444"Reset"1000"Yellow"44444444444"Reset" \n");
    printf("\t\t   1001        "Yellow"4444"Reset" 1101          1010      "Cyan"1001"Reset" 0111     1011     1101      "Yellow"4444"Reset" \n");
    printf("\t\t   1011        "Yellow"4444"Reset" 0001          1000      "Cyan"0001"Reset" 1011     1011     1000      "Yellow"444"Reset""Cyan"1"Reset" \n");
    printf("\t\t   1011        "Yellow"4444"Reset" 0001          1000      "Cyan"0001"Reset" 1011     1011     1000      "Yellow"44"Reset""Cyan"01"Reset" \n");
    printf("\t\t   1101        "Yellow"4444"Reset" 1010          1111      "Cyan"1111"Reset" 1001     1101     1111      "Yellow"4"Cyan"001"Reset" \n");
    printf("\t\t   1101        "Yellow"4444"Reset" 1101           0110    "Cyan"0000"Reset"  10100011 11011101  0011    "Cyan"1010"Reset"  \n");
    printf("\t\t   1101        "Yellow"4444"Reset" 1101             0100"Cyan"0101"Reset"    10000011 10000011    0110"Cyan"1010"Reset"    \n\n");
    printf("\t\t  "Cyan"1101010101010111101010100| "Reset" WELCOME TO THE PROGRAM OF "Cyan" |1010110110101010101010101\n");
    printf("\t\t  1101010101010111101010100| "Reset"  BSIT-1B "Green"GROUP 4:"Reset" APOLLO  "Cyan" |1010110110101010101010101"Reset"\n");
    printf("\t\t_____________________________________________________________________________________ ");
    printf("\n\n\t\t   "Green"(!)"Reset" USE THE PROGRAM?[Y/N]: ");
    scanf(" %c", &Start);

    system("cls");

    if(Start=='Y'||Start=='y')
    {
        do
        {
            printf("\n\t\t_____________________________________________________________________________________");
            printf("\n\t\t||__"Yellow"MAIN MENU"Reset"______________________________________________________________________||\n");
            printf("\n\t\t\t\t\t "Green"***"Reset" ENTER "Cyan"0"Reset" TO EXIT THE PROGRAM "Green"***"Reset"\n\n");
            printf("\n\t\t\t["Cyan"1"Reset"] GROUP MEMBERS INFORMATION     |   ["Cyan"7"Reset"] RELATIONAL OPERATORS          ");
            printf("\n\t\t\t["Cyan"2"Reset"] REGISTRATION FORM             |   ["Cyan"8"Reset"] BITWISE OPERATORS             ");
            printf("\n\t\t\t["Cyan"3"Reset"] TEMPERATURE CONVERSION        |   ["Cyan"9"Reset"] COLORS IN C LANGUAGE          ");
            printf("\n\t\t\t["Cyan"4"Reset"] GRADE CALCULATOR              |   ["Cyan"10"Reset"] INCREMENT & DECREMENT        ");
            printf("\n\t\t\t["Cyan"5"Reset"] CARBON FOOTPRINT CALCULATOR   |   ["Cyan"11"Reset"] AREA OF TRIANGLE             ");
            printf("\n\t\t\t["Cyan"6"Reset"] ARITHMETIC OPERATORS          |   ["Cyan"12"Reset"] VOTER'S AGE QUALIFICATION    ");
            printf("\n\n\t\t_____________________________________________________________________________________ ");
            printf("\n\n\t\t   "Green"(!)"Reset" SELECT A NUMBER: ");
            scanf("%i", &MainMenu);

            system("cls");

            switch(MainMenu)
            {
                do
                {
                    case 1: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"GROUP MEMBERS INFORMATION"Reset"______________________________________________________||\n");
                            printf("\n\t\t\t\t\t "Green"***"Reset" ENTER "Cyan"0"Reset" TO EXIT THE PROGRAM "Green"***"Reset"\n\n");
                            printf("\n\t\t\t\t\t\t["Cyan"1"Reset"] GEANGA, JOHN IRVIN         ");
                            printf("\n\t\t\t\t\t\t["Cyan"2"Reset"] BIAS, JOHN MICHAEL         ");
                            printf("\n\t\t\t\t\t\t["Cyan"3"Reset"] CUENCA, JAN IVERSON        ");
                            printf("\n\t\t\t\t\t\t["Cyan"4"Reset"] CORTEZ, JOSHUA PAUL        ");
                            printf("\n\t\t\t\t\t\t["Cyan"5"Reset"] DAPITAN, BABYLYN           ");
                            printf("\n\n\t\t_____________________________________________________________________________________ ");
                            printf("\n\n\t\t   "Green"(!)"Reset" SELECT A NUMBER: ");
                            scanf("%i", &Member);

                            system("cls");

                            switch(Member)
                            {
                                case 1: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"GEANGA, JOHN IRVIN"Reset"_____________________________________________________________||");
                                        printf("\n\n\t\t   "Cyan"I. BASIC INFORMATION"Reset" ");
                                        printf("\n\t\t\tName"Yellow":"Reset" Geanga, John Irvin C. \n\t\t\tAge"Yellow":"Reset" 19");
                                        printf("\n\t\t\tBirthday"Yellow":"Reset" June 30, 2003 \n\t\t\tAddress"Yellow":"Reset" Southville 8, San Isidro, Rodriguiz, Rizal");
                                        printf("\n\t\t\tContact No."Yellow":"Reset" 09683061658 \n\t\t\tEmail"Yellow":"Reset" johnirvingeanga@gmail.com");
                                        printf("\n\t\t\tCitizenship"Yellow":"Reset" Filipino \n\t\t\tFather's Name"Yellow":"Reset" Geanga, Rendon T.");
                                        printf("\n\t\t\tMother's Name"Yellow":"Reset" Geanga, Norelyn C. ");
                                        printf("\n\n\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset" ");
                                        printf("\n\t\t\tElementary"Yellow":"Reset" Southville 8 Elementary School (2010- 2016)");
                                        printf("\n\t\t\tJunior High "Yellow":"Reset" San Isidro Nitional Highschool (2016 - 2020)");
                                        printf("\n\t\t\tSenior High "Yellow":"Reset" Valley High Academy Inc. (2020 - 2022)");
                                        printf("\n\t\t\tTertiary"Yellow":"Reset" Colegio De Montalban (2022 - present) ");
                                        printf("\n\n\t\t   "Cyan"III. COURSE CHOICE"Reset" ");
                                        printf("\n\t\t\t1st Choice"Yellow":"Reset" BS Civl Engineering \n\t\t\t2nd Choice"Yellow":"Reset" BS Information Technology ");
                                        printf("\n\t\t\t3rd Choice"Yellow":"Reset" BSED: Mathematics");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                case 2: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"BIAS, JOHN MICHAEL"Reset"_____________________________________________________________||\n\n");
                                        printf("\t\t   "Cyan"I. BASIC INFORMATION"Reset" ");
                                        printf("\n\t\t\tName"Yellow":"Reset" Bias, John Michael V. \n\t\t\tAge"Yellow":"Reset" 18");
                                        printf("\n\t\t\tBirthday"Yellow":"Reset" Feb 6, 2004 \n\t\t\tAddress"Yellow":"Reset" Guinayang, San Mateo, Rizal");
                                        printf("\n\t\t\tContact No."Yellow":"Reset" 09197595992 \n\t\t\tEmail"Yellow":"Reset" johnmichael.bias.02062004@gmail.com");
                                        printf("\n\t\t\tCitizenship"Yellow":"Reset" Filipino \n\t\t\tFather's Name"Yellow":"Reset" Bias, Joeffry S.");
                                        printf(" \n\t\t\tMother's Name"Yellow":"Reset" Bias, Milagros V. ");
                                        printf("\n\n\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset" ");
                                        printf("\n\t\t\tElementary"Yellow":"Reset"San Mateo Elementary School (2010- 2016)");
                                        printf("\n\t\t\tJunior High"Yellow":"Reset" San Mateo National High School (2016 - 2020) ");
                                        printf("\n\t\t\tSenior High"Yellow":"Reset" San Mateo Senior High School (2020 - 2022)");
                                        printf("\n\t\t\tTertiary"Yellow":"Reset" Colegio De Montalban (2022 - present) ");
                                        printf("\n\n\t\t   "Cyan"III. COURSE CHOICE"Reset" ");
                                        printf("\n\t\t\t1st Choice"Yellow":"Reset" BS Information Technology \n\t\t\t2nd Choice"Yellow":"Reset" BSBA: HRM");
                                        printf("\n\t\t\t3rd Choice"Yellow":"Reset" BS Office Administration");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                case 3: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"CUENCA, JAN IVERSON"Reset"____________________________________________________________||\n\n");
                                        printf("\t\t   "Cyan"I. BASIC INFORMATION"Reset" ");
                                        printf("\n\t\t\tName"Yellow":"Reset" Cuenca, Jan Iverson \n\t\t\tAge"Yellow":"Reset" 20");
                                        printf("\n\t\t\tBirthday"Yellow":"Reset" Jan 22, 2002 \n\t\t\tAddress"Yellow":"Reset" Tagumpay Housing, Rodriguez, Rizal");
                                        printf("\n\t\t\tContact No.."Yellow":"Reset" 09187016900 \n\t\t\tEmail"Yellow":"Reset" iversoncuenca22@gmail.com ");
                                        printf("\n\t\t\tCitizenship"Yellow":"Reset" Filipino \n\t\t\tFather's Name"Yellow":"Reset" Cuenca, Joselito ");
                                        printf("\n\t\t\tMother's Name"Yellow":"Reset" Cuenca, Normie ");
                                        printf("\n\n\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset" ");
                                        printf("\n\t\t\tElementary"Yellow":"Reset" Tagumpay Elementary School ");
                                        printf("\n\t\t\tJunior High"Yellow":"Reset" Tagumpay Nitional Highschool ");
                                        printf("\n\t\t\tSenior High"Yellow":"Reset" Asian Institute Of Computer Studies");
                                        printf("\n\t\t\tertiary"Yellow":"Reset" Colegio De Montalban (2022 - present) ");
                                        printf("\n\n\t\t   "Cyan"III. COURSE CHOICE"Reset":");
                                        printf("\n\t\t\t1st Choice:BSBA"Yellow":"Reset" HRM \n\t\t\t2nd Choice"Yellow" "Reset" BS Entrepreneurship ");
                                        printf("\n\t\t\t3rd Choice"Yellow":"Reset" N/A");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                case 4: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"CORTEZ, JOSHUA PAUL"Reset"____________________________________________________________||\n\n");
                                        printf("\t\t   "Cyan"I. BASIC INFORMATION"Reset" ");
                                        printf("\n\t\t\tName"Yellow":"Reset" Cortez, Joshua Paul \n\t\t\tAge"Yellow":"Reset" 18");
                                        printf("\n\t\t\tBirthday"Yellow":"Reset" August 7, 2004 \n\t\t\tAddress"Yellow":"Reset" Sub Urban, San Jose, Rodriguiz, Rizal");
                                        printf("\n\t\t\tContact No."Yellow":"Reset" 09770978036 \n\t\t\tEmail"Yellow":"Reset" joshuapaulcortez@gmail.com ");
                                        printf("\n\t\t\tCitizenship"Yellow":"Reset" Filipino \n\t\t\tFather's Name"Yellow":"Reset" Cortez, Redentor ");
                                        printf("\n\t\t\tMother's Name"Yellow":"Reset" Cortez, Josephine. ");
                                        printf("\n\n\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset" ");
                                        printf("\n\t\t\tElementary"Yellow":"Reset" Kasiglahan Village Elementary School ");
                                        printf("\n\t\t\tJunior High"Yellow":"Reset" Bajet Castillo High School ");
                                        printf("\n\t\t\tSenior High"Yellow":"Reset" Kasiglahan Village Senior High School ");
                                        printf("\n\t\t\tTertiary"Yellow":"Reset" Colegio De Montalban (2022 - present)  ");
                                        printf("\n\n\t\t   "Cyan"III. COURSE CHOICE"Reset" ");
                                        printf("\n\t\t\t1st Choice:BS Information Technology \n\t\t\t2nd Choice"Yellow":"Reset" BS Computer Engineering ");
                                        printf("\n\t\t\t3rd Choice"Yellow":"Reset" BS Entrepreneurship");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                case 5: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"DAPITAN, BABYLYN"Reset"_______________________________________________________________||\n\n");
                                        printf("\t\t   "Cyan"I. BASIC INFORMATION"Reset" ");
                                        printf("\n\t\t\tName"Yellow":"Reset" Dapitan, Babylyn \n\t\t\tAge"Yellow":"Reset" 20");
                                        printf("\n\t\t\tBirthday"Yellow":"Reset"  May 1, 2002 \n\t\t\tAddress"Yellow":"Reset" Sitio Tabak 2, San Rafael, Rodriguez, Rizal");
                                        printf("\n\t\t\tContact No."Yellow":"Reset" 09103828378 \n\t\t\tEmail"Yellow":"Reset" babylyndapitan21@gmail.com");
                                        printf("\n\t\t\tCitizenship"Yellow":"Reset" Filipino \n\t\t\tFather's Name"Yellow":"Reset" Dapitan, Eduardo ");
                                        printf("\n\t\t\tMother's Name"Yellow":"Reset" Dapitan, Arlene ");
                                        printf("\n\n\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset" ");
                                        printf("\n\t\t\tElementary"Yellow":"Reset" San Rafael Elementary School (2010- 2016) ");
                                        printf("\n\t\t\tJunior High"Yellow":"Reset" Wawa National High School (2019 - 2020) ");
                                        printf("\n\t\t\tSenior High"Yellow":"Reset" San Jose Litex (2020 - 2022) ");
                                        printf("\n\t\t\tTertiary"Yellow":"Reset" Colegio De Montalban (2022 - present) ");
                                        printf("\n\n\t\t   "Cyan"III. COURSE CHOICE"Reset" ");
                                        printf("\n\t\t\t1st Choice"Yellow":"Reset" BSBA: HRM \n\t\t\t2nd Choice"Yellow":"Reset" BS Entrepreneurship ");
                                        printf("\n\t\t\t3rd Choice"Yellow":"Reset" BS Information Technology");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                case 0: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the \" "Yellow"GROUP MEMBERS INFORMATION"Reset" \" program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;


                                default:printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||\n");
                                        printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                        printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                        printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                        printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                        printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                        printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 2: printf("\n\t\t_____________________________________________________________________________________");
                             printf("\n\t\t||__"Yellow"REGISTRATION FORM"Reset"______________________________________________________________||\n\n");
                             printf("\t\t\t\t    "Green"***"Reset" FILL OUT ALL NEEDED INFORMATION BELOW "Green"***"Reset"\n\n");
                             printf("\t\t   "Cyan"I. BASIC INFORMATION"Reset"\n\t\t\tName: ");
                             scanf(" %50[^\n]",&name);
                             printf("\t\t\tAge: ");
                             scanf(" %20[^\n]",&age);
                             printf("\t\t\tBirthday: ");
                             scanf(" %50[^\n]",&bday);
                             printf("\t\t\tAddress: ");
                             scanf(" %100[^\n]",&add);
                             printf("\t\t\tContact No.: ");
                             scanf(" %20[^\n]",&contact);
                             printf("\t\t\tEmail: ");
                             scanf(" %30[^\n]",&email);
                             printf("\t\t\tCitizenship: ");
                             scanf(" %20[^\n]",&citizen);
                             printf("\t\t\tFather's Name: ");
                             scanf(" %50[^\n]",&father);
                             printf("\t\t\tMother's Name: ");
                             scanf(" %50[^\n]",&mother);
                             printf("\n\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset"\n\t\t\tElementary: ");
                             scanf(" %100[^\n]",&elem);
                             printf("\t\t\tJunior High: ");
                             scanf(" %100[^\n]",&jhs);
                             printf("\t\t\tSenior High: ");
                             scanf(" %100[^\n]",&shs);
                             printf("\n\t\t   "Cyan"III. COURSE CHOICE"Reset"\n\t\t\tFirst choice: ");
                             scanf(" %50[^\n]",&choice1);
                             printf("\t\t\tSecond Choince: ");
                             scanf(" %50[^\n]",&choice2);
                             printf("\t\t\tThird Choice: ");
                             scanf(" %50[^\n]",&choice3);

                             system("cls");

                             printf("\n\t\t_____________________________________________________________________________________");
                             printf("\n\t\t||__"Yellow"REGISTRATION FORM"Reset"______________________________________________________________||\n\n");
                             printf("\t\t\t\t\t   "Green"***"Reset" COLLEGE APPLICATION FORM "Green"***"Reset"");
                             printf("\n\t\t      -------------------------------------------------------------------------    \n");
                             printf("\t\t   "Cyan"I. BASIC INFORMATION"Reset"\n\t\t\tName"Yellow":"Reset" %s\n\t\t\tAGE"Yellow":"Reset" %s ", name,age);
                             printf("\n\t\t\tBirthday"Yellow":"Reset" %s\n\t\t\tAddress"Yellow":"Reset" %s", bday,add);
                             printf("\n\t\t\tContact No."Yellow":"Reset" %s\n\t\t\tEmail"Yellow":"Reset" %s\n\t\t\tCitizenship"Yellow":"Reset" %s ", contact,email,citizen);
                             printf("\n\t\t\tFather's Name"Yellow":"Reset" %s \n\t\t\tMother's Name"Yellow":"Reset" %s\n",father,mother);
                             printf("\n\t\t      -------------------------------------------------------------------------    \n");
                             printf("\t\t   "Cyan"II. EDUCATIONAL BACKGROUND"Reset"\n\n\t\t\tElementary"Yellow":"Reset" %s", elem);
                             printf("\n\t\t\tJunior High"Yellow":"Reset" %s \n\t\t\tSenior High"Yellow":"Reset" %s\n", jhs,shs);
                             printf("\n\t\t      -------------------------------------------------------------------------    \n");
                             printf("\t\t   "Cyan"III. COURSE CHOICE"Reset"\n\n\t\t\t1st Choice"Yellow":"Reset" %s", choice1);
                             printf(" \n\t\t\t2nd Choice"Yellow":"Reset" %s \n\t\t\t3rd Choice"Yellow":"Reset" %s",choice2,choice3);
                             printf("\n\t\t_____________________________________________________________________________________");
                             printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                             scanf(" %c", &response1);
                             system("cls");


                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 3: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"TEMPERATURE CONVERSION"Reset"_________________________________________________________||\n");
                            printf("\n\t\t\t\t\t "Green"***"Reset" ENTER "Cyan"0"Reset" TO EXIT THE PROGRAM "Green"***"Reset"\n\n");
                            printf("\t\t\t\t\t      ["Cyan"1"Reset"] CELSIUS TO FAHRENHEIT         \n");
                            printf("\t\t\t\t\t      ["Cyan"2"Reset"] FAHRENHEIT TO CELSIUS         \n");
                            printf("\n\t\t_____________________________________________________________________________________ ");
                            printf("\n\n\t\t   "Green"(!)"Reset" SELECT A NUMBER: ");
                            scanf("%i", &Option1);

                            system("cls");

                            switch(Option1)
                            {
                                do{
                                case 1: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"CELSIUS TO FAHRENHEIT"Reset"__________________________________________________________||\n\n");
                                        printf("\t\t   "Cyan"I. CELSIUS"Reset" \n\t\t\tEnter Celsius: ");
                                        scanf("%f",&cel);
                                        fah= (cel*9/5)+32;
                                        printf("\n\t\t   "Cyan"II. FAHRENHEIT"Reset" \n\t\t\t%.2f C "Green"="Reset" %.2f F\n", cel, fah);
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 2: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"FAHRENHIET TO CELSIUS"Reset"__________________________________________________________||\n\n");
                                        printf("\t\t   "Cyan"I. FAHRENHEIT"Reset" \n\t\t\tEnter Fahrenheit: ");
                                        scanf("%f",&fah);
                                        cel = (fah-32)*5/9;
                                        printf("\n\t\t   "Cyan"II. CELSIUS"Reset" \n\t\t\t%.2f F "Green"="Reset" %.2f C\n", fah, cel);
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                case 0: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the \" "Yellow"TEMPERATURE CONVERSION"Reset" \" program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                default:printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||\n");
                                        printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                        printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                        printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                        printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                        printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                        printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t\t"Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 4: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"GRADE CALCULATOR"Reset"_______________________________________________________________||\n\n");
                            printf("\t\t   "Cyan"I. PROVIDE ALL NEEDED DATA"Reset" \n\t\t\tQuiz Grade: ");
                            scanf("%f", &quiz);
                            printf("\t\t\tAssignmnet Grade: ");
                            scanf("%f", &ass);
                            printf("\t\t\tProject Grade: ");
                            scanf("%f", &project);
                            printf("\t\t\tClass Standing Grade: ");
                            scanf("%f", &standing);
                            printf("\t\t\tMajor Exam Grade: ");
                            scanf("%f", &exam);

                            system("cls");

                            finalG = (quiz*.15)+(ass*.15)+(project*.20)+(standing*.10)+(exam*.40);

                            if(finalG>=75 && finalG<=100){
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||__"Yellow"GRADE CALCULATOR"Reset"_______________________________________________________________||\n\n");
                                printf("\t\t   "Cyan"II. FINAL GRADE "Reset" \n\t\t\tGRADE: %.2f | "Green"PASSED"Reset"\n\n", finalG);
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(finalG>=0 && finalG<75){
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||__"Yellow"GRADE CALCULATOR"Reset"_______________________________________________________________||\n\n");
                                printf("\t\t   "Cyan"II. FINAL GRADE "Reset" \n\t\t\tGRADE: %.2f | "Red"FAILED"Reset"\n\n", finalG);
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else{
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||_________________________________________________________________________________||\n");
                                printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 5: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"CARBON FOOTPRINT CALCULATOR"Reset"____________________________________________________||\n\n");
                            printf("\t\t\t     "Green"***"Reset" CALCULATE YOUR ESTIMATED CARBON FOOTPRINT PER YEAR!! "Green"***"Reset"\n\n");
                            printf("\t\t   "Cyan"I. BILLS"Reset"\n");
                            printf("\t\t\t1. Enter Your Monthly Electric Bill  ("Yellow"KW"Reset"/"Yellow"H"Reset"): ");
                            scanf("%f", &ElecBill);
                            printf("\t\t\t2. Enter How much KG of LPG used in 1 Month ("Yellow"KG"Reset"): ");
                            scanf("%f", &LpgKg);
                            printf("\n\t\t   "Cyan"II. TRANSPORTATION"Reset"\n");
                            printf("\t\t\t1. Enter Monthly fuel used ("Yellow"LITER"Reset"): ");
                            scanf("%f", &Liters);
                            printf("\t\t\t2. Number of Flight in the past ("Yellow"YEAR"Reset") that Below 4hrs: ");
                            scanf("%f", &Flight1);
                            printf("\t\t\t3. Number of Flight in the past ("Yellow"YEAR"Reset") that 4hrs and above: ");
                            scanf("%f", &Flight2);
                            printf("\n\t\t   "Cyan"II. RECYCLING"Reset"\n");
                            printf("\t\t\t1. Do You Recycle Newspapers? \n");
                            printf("\t\t\t   If YES Input ("Yellow"0"Reset"), If NO Input ("Yellow"1"Reset"): ");
                            scanf("%f", &Recycle1);
                            printf("\t\t\t2. Do You Recycle Aluminum & Tin?\n ");
                            printf("\t\t\t   If YES Input ("Yellow"0"Reset"), If NO Input ("Yellow"1"Reset"): ");
                            scanf("%f", &Recycle2);

                            system("cls");

                            Co2footprintformulapart1= (((ElecBill*0.6032)*12)*2.20462)+(((LpgKg*12)*0.2642)* 12.52)+(((Liters*2.5)*12)*2.20462);
                            Co2footprintformulapart2= ((Flight1*1100)+(Flight2*4400))+(Recycle1*184)+(Recycle2*166);
                            TOTAL= Co2footprintformulapart1 + Co2footprintformulapart2;


                            if(TOTAL>=0 && TOTAL<6000){
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||__"Yellow"CARBON FOOTPRINT CALCULATOR"Reset"____________________________________________________||\n\n");
                                printf("\t\t   "Cyan"I. TOTAL"Reset" \n");
                                printf("\n\t\t\tA. ESTIMATED CARBON FOOTPRINT(Lbs): "Cyan"%.2f"Reset" Pounds/Year ", TOTAL);
                                printf("\n\t\t\tB. CATEGORY: "Cyan" \"VERY LOW\""Reset);
                                printf("\n\t\t\tC. REMARKS: WOW, THAT'S IMPRESSIVE WORK!\n");
                            }
                            else if(TOTAL>=6000 && TOTAL<16000){
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||__"Yellow"CARBON FOOTPRINT CALCULATOR"Reset"____________________________________________________||\n\n");
                                printf("\t\t   "Cyan"I. TOTAL"Reset" \n");
                                printf("\n\t\t\tA. ESTIMATED CARBON FOOTPRINT(Lbs): "Green"%.2f"Reset" Pounds/Year ", TOTAL);
                                printf("\n\t\t\tB. CATEGORY: "Green"\"LOW\""Reset);
                                printf("\n\t\t\tC. REMARKS: YOUR CO2 EMISSION IS LOWER THAN AVERAGE.\n\t\t\t   KEEP UP THE GOOD WORK!\n");
                            }
                            else if(TOTAL>=16000 && TOTAL<22000){
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||__"Yellow"CARBON FOOTPRINT CALCULATOR"Reset"____________________________________________________||\n\n");
                                printf("\t\t   "Cyan"I. TOTAL"Reset" \n");
                                printf("\n\t\t\tA. ESTIMATED CARBON FOOTPRINT(Lbs): "Yellow"%.2f"Reset" Pounds/Year ", TOTAL);
                                printf("\n\t\t\tB. CATEGORY: "Yellow"\"AVERAGE\""Reset);
                                printf("\n\t\t\tC. REMARKS: YOUR CO2 EMISSION IS AT AVERAGE LEVEL.\n\t\t\t   PLEASE! MAINTAIN YOUR WORK\n");
                            }
                            else if(TOTAL>=22000){
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||__"Yellow"CARBON FOOTPRINT CALCULATOR"Reset"____________________________________________________||\n\n");
                                printf("\t\t   "Cyan"I. TOTAL"Reset" \n");
                                printf("\n\t\t\tA. ESTIMATED CARBON FOOTPRINT(Lbs): "Red"%.2f"Reset" Pounds/Year ", TOTAL);
                                printf("\n\t\t\tB. CATEGORY: "Red"\"HIGH!!\" "Reset);
                                printf("\n\t\t\tC. REMARKS: YOUR CO2 EMISSION IS HIGH.\n\t\t\t   TAKE ACTION BEFORE IT'S TOO LATE!\n");
                            }
                            else{
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||_________________________________________________________________________________||\n");
                                printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                                continue;
                            }

                            printf("\n\t\t   "Cyan"II. PLEASE READ!"Reset"\n");
                            printf("\n\t\t\t     A NUMBER BELOW 6,000(REFLECTED IN POUNDS PER YEAR)");
                            printf("\n\t\t\t   IS EXCELLENT. GOOD IS ANYWHERE FROM 6,000 TO 15,999).");
                            printf("\n\t\t\t   WHILE 16.000 TO 22,000 IS AVERAGE. OVER 22,000 IS\n\t\t\t   NOT GOOD.\n");
                            printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                            scanf(" %c", &response1);
                            system("cls");

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 6: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"ARITHMETIC OPERATORS"Reset"___________________________________________________________||\n");
                            printf("\n\t\t   "Cyan"I. PROVIDE ALL NEEDED DATA"Reset" \n\t\t\tInput 1st Number: ");
                            scanf("%f",&input1);
                            printf("\t\t\tInput 2nd Number: ");
                            scanf("%f",&input2);
                            printf("\t\t\tInput 3rd Number: ");
                            scanf("%f",&input3);

                            system("cls");

                            sum= (input1 + input2 + input3);
                            diff= (input3 - input2);
                            prod= (input1 * input3);
                            qout= (input1 / input2);
                            expo= pow(input3, input2);

                            printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"RESULT"Reset"_________________________________________________________________________||\n");
                            printf("\n\t\t   "Cyan"A. SUM OF"Reset": ");
                            printf("\n\t\t\t"Yellow"("Reset"%.2f + %.2f + %.2f"Yellow") "Green"="Reset" %.2f \n", input1,input2,input3,sum);
                            printf("\n\t\t   "Cyan"B. DIFFERENCE OF"Reset": ");
                            printf("\n\t\t\t"Yellow"("Reset"%.2f - %.2f"Yellow") "Green"="Reset" %.2f \n", input3,input2,diff);
                            printf("\n\t\t   "Cyan"C. PRODUCT OF"Reset":");
                            printf("\n\t\t\t"Yellow"("Reset"%.2f * %.2f"Yellow") "Green"="Reset" %.2f \n", input1,input3,prod);
                            printf("\n\t\t   "Cyan"D. QUOTIENT OF"Reset":");
                            printf("\n\t\t\t"Yellow"("Reset"%.2f / %.2f"Yellow") "Green"="Reset" %.2f \n", input1,input2,qout);
                            printf("\n\t\t   "Cyan"E. POWER OF"Reset":");
                            printf("\n\t\t\t"Yellow"("Reset"%.2f raise to %.2f"Yellow") "Green"="Reset" %.2f \n\n", input3,input2,expo);
                            printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                            scanf(" %c", &response1);
                            system("cls");


                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 7: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"RELATIONAL OPERATORS"Reset"___________________________________________________________||\n");
                            printf("\n\t\t   "Cyan"I. PROVIDE ALL NEEDED DATA"Reset"\n\n");
                            printf("\t\t\tEnter 1st Number: ");
                            scanf("%f", &num1);
                            printf("\t\t\tEnter 2nd Number: ");
                            scanf("%f", &num2);

                            if(num1>num2){
                                printf("\n\t\t   "Cyan"II. RESULT"Reset": \n\n\t\t\tYour 1st Input (%.2f) is the "Green"HIGHER"Reset" Number.\n\n", num1);
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t  "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(num1<num2){
                                printf("\n\t\t   "Cyan"II. RESULT"Reset": \n\n\t\t\tYour 2nd Input (%.2f) is the "Green"HIGHER"Reset" Number. \n\n", num2);
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else{
                                printf("\n\t\t   "Cyan"II. RESULT"Reset": \n\n\t\t\t%.2f is "Green"EQUAL"Reset" TO %.2f\n\n", num1,num2);
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");;
                                scanf(" %c", &response1);
                                system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 8: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"BITWISE OPERATORS"Reset"______________________________________________________________||\n");
                            printf("\n\t\t\t\t\t "Green"***"Reset" ENTER "Cyan"0"Reset" TO EXIT THE PROGRAM "Green"***"Reset"\n\n");
                            printf("\t\t\t\t\t\t ["Cyan"1"Reset"] AND OPERATOR (&)    \n");
                            printf("\t\t\t\t\t\t ["Cyan"2"Reset"] OR OPERATOR  (|)    \n");
                            printf("\t\t\t\t\t\t ["Cyan"3"Reset"] XOR OPERATOR (^)    \n");
                            printf("\n\t\t_____________________________________________________________________________________ ");
                            printf("\n\n\t\t   "Green"(!)"Reset" SELECT A NUMBER: ");
                            scanf("%i", &Option2);

                            system("cls");

                            switch(Option2)
                            {
                                do{
                                case 1: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"AND OPERATOR (&)"Reset"_______________________________________________________________||\n");
                                        printf("\n\t\t\t\t   "Green"***"Reset" YOUR INPUT RANGE IS FROM"Green" 0 "Reset"TO"Green" 255"Reset" ONLY!! "Green"***"Reset" ");
                                        printf("\n\t\t   "Cyan"I. YOUR INPUT"Reset" \n");
                                        printf("\n\t\t\tInput the 1st Value: ");
                                        scanf("%i",&bw1);
                                        printf("\t\t\tInput the 2nd Value: ");
                                        scanf("%i",&bw2);

                                        if(bw1<0 || bw1>255 || bw2<0 || bw2>255){
                                            printf("\n\t\t   "Cyan"II. RESULT"Reset" \n\n\a\t\t\t"Red"ERROR"Reset": OUT OF RANGE!!\n");
                                            printf("\n\t\t_____________________________________________________________________________________");
                                            printf("\n\n\t\t  "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                            scanf(" %c", &TryAgain);
                                            system("cls");
                                        }
                                        else{
                                            bwResult=bw1 & bw2;
                                            printf("\n\t\t   "Cyan"II. RESULT"Reset" \n\n\t\t\t%i & %i "Green"="Reset" %i\n",bw1,bw2,bwResult);
                                            printf("\n\t\t_____________________________________________________________________________________");
                                            printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                            scanf(" %c", &TryAgain);
                                            system("cls");
                                        }

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 2: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"OR OPERATOR  (|)"Reset"_______________________________________________________________||\n");
                                        printf("\n\t\t\t\t   "Green"***"Reset" YOUR INPUT RANGE IS FROM"Green" 0 "Reset"TO"Green" 255"Reset" ONLY!! "Green"***"Reset" ");
                                        printf("\n\t\t   "Cyan"I. YOUR INPUT"Reset" \n");
                                        printf("\n\t\t\tInput the 1st Value: ");
                                        scanf("%i",&bw1);
                                        printf("\t\t\tInput the 2nd Value: ");
                                        scanf("%i",&bw2);

                                        if(bw1<0 || bw1>255 || bw2<0 || bw2>255 ){
                                            printf("\n\t\t   "Cyan"II. RESULT"Reset" \n\n\a\t\t\t"Red"ERROR"Reset": OUT OF RANGE!!\n");
                                            printf("\n\t\t_____________________________________________________________________________________");
                                            printf("\n\n\t\t  "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                            scanf(" %c", &TryAgain);
                                            system("cls");
                                        }
                                        else{
                                            bwResult=bw1 | bw2;
                                            printf("\n\t\t   "Cyan"II. RESULT"Reset" \n\n\t\t\t%i | %i "Green"="Reset" %i\n",bw1,bw2,bwResult);
                                            printf("\n\t\t_____________________________________________________________________________________");
                                            printf("\n\n\t\t\t"Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                            scanf(" %c", &TryAgain);
                                            system("cls");
                                        }

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 3: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"XOR OPERATOR (^)"Reset"_______________________________________________________________||\n");
                                        printf("\n\t\t\t\t   "Green"***"Reset" YOUR INPUT RANGE IS FROM"Green" 0 "Reset"TO"Green" 255"Reset" ONLY!! "Green"***"Reset" ");
                                        printf("\n\t\t   "Cyan"I. YOUR INPUT"Reset" \n");
                                        printf("\n\t\t\tInput the 1st Value: ");
                                        scanf("%i",&bw1);
                                        printf("\t\t\tInput the 2nd Value: ");
                                        scanf("%i",&bw2);

                                        if(bw1<0 || bw1>255 || bw2<0 || bw2>255){
                                            printf("\n\t\t   "Cyan"II. RESULT"Reset" \n\n\a\t\t\t"Red"ERROR"Reset": OUT OF RANGE!!\n");
                                            printf("\n\t\t_____________________________________________________________________________________");
                                            printf("\n\n\t\t  "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                            scanf(" %c", &TryAgain);
                                            system("cls");
                                        }
                                        else{
                                            bwResult=bw1 ^ bw2;
                                            printf("\n\t\t   "Cyan"II. RESULT"Reset" \n\n\t\t\t%i ^ %i "Green"="Reset" %i\n",bw1,bw2,bwResult);
                                            printf("\n\t\t_____________________________________________________________________________________");
                                            printf("\n\n\t\t\t"Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                            scanf(" %c", &TryAgain);
                                            system("cls");
                                        }

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                case 0: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the \" "Yellow"BITWISE OPERATORS"Reset" \" program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                default:printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||\n");
                                        printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                        printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                        printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                        printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                        printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                        printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t\t"Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 9: printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"COLORS IN C LANGUAGE"Reset"___________________________________________________________||\n\n");
                            printf("\t\t\t      "Green"***"Reset" INPUT ONLY THE "Green"BEGINNING LETTER"Reset" OF A COLOR NAME!! "Green"***"Reset"");
                            printf("\n\n\t\t   "Cyan"I. YOUR INPUT"Reset" \n");
                            printf("\n\t\t\tINPUT LETTER: ");
                            scanf(" %c", &Letter);


                            if(Letter=='M' || Letter=='m'){
                                printf("\n\t\t   "Cyan"II. COLOR"Reset": \""Magenta"MAGENTA"Reset"\"\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N] ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(Letter=='Y' || Letter=='y'){
                                printf("\n\t\t   "Cyan"II. COLOR"Reset": \""Yellow"YELLOW"Reset"\"\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(Letter=='G' || Letter=='g'){
                                printf("\n\t\t   "Cyan"II. COLOR"Reset": \""Green"GREEN"Reset"\"\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(Letter=='C' || Letter=='c'){
                                printf("\n\t\t   "Cyan"II. COLOR"Reset": \""Cyan"CYAN"Reset"\"\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(Letter=='B' || Letter=='b'){
                                printf("\n\t\t   "Cyan"II. COLOR"Reset": \""Blue"BLUE"Reset"\"\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(Letter=='R' || Letter=='r'){
                                printf("\n\t\t   "Cyan"II. COLOR"Reset": \""Red"RED"Reset"\"\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else{
                                printf("\n\n\a\t\t\t"Red"ERROR"Reset": NOT AVAILABLE!!\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 10:printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"INCREMENT & DECREMENT"Reset"__________________________________________________________||\n");
                            printf("\n\t\t\t\t\t "Green"***"Reset" ENTER "Cyan"0"Reset" TO EXIT THE PROGRAM "Green"***"Reset"\n\n");
                            printf("\n\t\t\t     ["Cyan"1"Reset"] PRE INCREMENT            |   ["Cyan"5"Reset"] PRE DECREMENT          ");
                            printf("\n\t\t\t     ["Cyan"2"Reset"] POST INCREMENT           |   ["Cyan"6"Reset"] POST DECREMENT         ");
                            printf("\n\t\t\t     ["Cyan"3"Reset"] INCREMENT (WHILE LOOP)   |   ["Cyan"7"Reset"] DECREMENT(WHILE LOOP)  ");
                            printf("\n\t\t\t     ["Cyan"4"Reset"] INCREMENT (FOR LOOP)     |   ["Cyan"8"Reset"] DECREMENT(FOR LOOP)    ");
                            printf("\n\n\t\t_____________________________________________________________________________________ ");
                            printf("\n\n\t\t   "Green"(!)"Reset" SELECT A NUMBER: ");
                            scanf("%i", &Option3);

                            system("cls");

                            switch(Option3)
                            {
                                do{
                                case 1: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"PRE-INCREMENT"Reset"__________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I.INPUT 3 INTEGER"Reset" ");
                                        printf("\n\t\t\tInput The Value of X: ");
                                        scanf("%i", &X);
                                        printf("\t\t\tInput The Value of Y: ");
                                        scanf("%i", &Y);
                                        printf("\t\t\tInput The Value of Z: ");
                                        scanf("%i", &Z);

                                        system("cls");

                                        ++X;
                                        ++Y;
                                        ++Z;

                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"RESULT:"Reset"________________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"II. NEW VALUE"Reset" \n\t\t\tThe New Value of X is: %i", X);
                                        printf("\n\t\t\tThe New Value of Y is: %i", Y);
                                        printf("\n\t\t\tThe New Value of Z is: %i \n\n", Z);
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 2: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"POST-INCREMENT"Reset"_________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT 3 INTEGER"Reset" ");
                                        printf("\n\t\t\tInput The Value of X: ");
                                        scanf("%i", &X);
                                        printf("\t\t\tInput The Value of Y: ");
                                        scanf("%i", &Y);
                                        printf("\t\t\tInput The Value of Z: ");
                                        scanf("%i", &Z);

                                        system("cls");

                                        A= X++;
                                        B= Y++;
                                        C= Z++;

                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"RESULT:"Reset"________________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"II. ORIGINAL VALUE"Reset" ");
                                        printf("\n\t\t\tThe Value of A is: %i", A);
                                        printf("\n\t\t\tThe Value of B is: %i", B);
                                        printf("\n\t\t\tThe Value of C is: %i", C);
                                        printf("\n\n\t\t   "Cyan"III. NEW VALUE"Reset" ");
                                        printf("\n\t\t\tThe New Value of X is: %i", X);
                                        printf("\n\t\t\tThe New Value of Y is: %i", Y);
                                        printf("\n\t\t\tThe New Value of Z is: %i \n\n", Z);
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 3: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"INCREMENT (WHILE LOOP)"Reset"_________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT"Reset" \n\t\t\t1. Enter The Start Value: ");
                                        scanf("%i", &START);
                                        printf("\t\t\t2. Enter The Increment Value: ");
                                        scanf("%i", &IncreandDecre);
                                        printf("\t\t\t3. Enter The End Value: ");
                                        scanf("%i", &END);

                                        printf("\n\t\t   "Cyan"II. OUTPUT"Reset" \n");
                                        while(START<=END){
                                            printf("\t\t\t\t%i \n", START);
                                            START += IncreandDecre;
                                        }
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]:");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 4: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"INCREMENT (FOR LOOP)"Reset"___________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT"Reset" \n\t\t\t1. Enter The Start Value: ");
                                        scanf("%i", &START);
                                        printf("\t\t\t3. Enter The End Value: ");
                                        scanf("%i", &END);

                                        printf("\n\t\t   "Cyan"II. OUTPUT"Reset" \n");
                                        for(START; START<=END; START++){
                                            printf("\t\t\t\t%i \n", START);
                                        }
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 5: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"PRE DECREMENT"Reset"__________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT 3 INTEGER"Reset" ");
                                        printf("\n\t\t\tInput The Value of X: ");
                                        scanf("%i", &X);
                                        printf("\t\t\tInput The Value of Y: ");
                                        scanf("%i", &Y);
                                        printf("\t\t\tInput The Value of Z: ");
                                        scanf("%i", &Z);

                                        system("cls");

                                        X--;
                                        Y--;
                                        Z--;

                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"RESULT:"Reset"________________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"II. NEW VALUE"Reset"\n\t\t\tThe New Value of X is: %i", X);
                                        printf("\n\t\t\tThe New Value of Y is: %i", Y);
                                        printf("\n\t\t\tThe New Value of Z is: %i \n\n", Z);
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 6: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"POST DECREMENT"Reset"_________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT 3 INTEGER"Reset" ");
                                        printf("\n\t\t\tInput The Value of X: ");
                                        scanf("%i", &X);
                                        printf("\t\t\tInput The Value of Y: ");
                                        scanf("%i", &Y);
                                        printf("\t\t\tInput The Value of Z: ");
                                        scanf("%i", &Z);

                                        system("cls");

                                        A= X--;
                                        B= Y--;
                                        C= Z--;

                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"RESULT:"Reset"________________________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"II. ORIGINAL VALUE"Reset" ");
                                        printf("\n\t\t\tThe Value of A is: %i", A);
                                        printf("\n\t\t\tThe Value of B is: %i", B);
                                        printf("\n\t\t\tThe Value of C is: %i", C);
                                        printf("\n\n\t\t   "Cyan"III. NEW VALUE"Reset" ");
                                        printf("\n\t\t\tThe New Value of X is: %i", X);
                                        printf("\n\t\t\tThe New Value of Y is: %i", Y);
                                        printf("\n\t\t\tThe New Value of Z is: %i \n\n", Z);
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 7: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"DECREMENT (WHILE LOOP)"Reset"_________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT"Reset" \n\t\t\t1. Enter The Start Value: ");
                                        scanf("%i", &START);
                                        printf("\t\t\t2. Enter The Decrement Value: ");
                                        scanf("%i", &IncreandDecre);
                                        printf("\t\t\t3. Enter The End Value: ");
                                        scanf("%i", &END);

                                        printf("\n\t\t   "Cyan"II. OUTPUT"Reset" \n");
                                        while(START>=END){
                                            printf("\t\t\t\t%i \n", START);
                                            START -= IncreandDecre;
                                        }
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]:");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                do{
                                case 8: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||__"Yellow"DECREMENT (FOR LOOP)"Reset"___________________________________________________________||\n");
                                        printf("\n\t\t   "Cyan"I. INPUT"Reset" \n\t\t\t1. Enter The Start Value: ");
                                        scanf("%i", &START);
                                        printf("\t\t\t3. Enter The End Value: ");
                                        scanf("%i", &END);

                                        printf("\n\t\t   "Cyan"II. OUTPUT"Reset" \n");
                                        for(START; START>=END; START--){
                                            printf("\t\t\t\t%i \n", START);
                                        }
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                        scanf(" %c", &TryAgain);
                                        system("cls");

                                }while(TryAgain=='Y'||TryAgain=='y');
                                if(TryAgain=='N'||TryAgain=='n'){
                                    printf("\n\t\t_____________________________________________________________________________________");
                                    printf("\n\t\t||_________________________________________________________________________________||");
                                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                    scanf(" %c", &response1);
                                    system("cls");
                                }
                                break;

                                case 0: printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||");
                                        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the \" "Yellow"INCREMENT & DECREMENT"Reset" \" program again?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                                        break;

                                default:printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\t\t||_________________________________________________________________________________||\n");
                                        printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                        printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                        printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                        printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                        printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                        printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");;
                                        printf("\n\t\t_____________________________________________________________________________________");
                                        printf("\n\n\t\t\t"Green"(!)"Reset" Back to "Yellow"Sub Menu"Reset" ?[Y/N]: ");
                                        scanf(" %c", &response1);
                                        system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 11:printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"AREA OF TRIANGLE"Reset"_______________________________________________________________||\n\n");
                            printf("\t\t\t   "Green"***"Reset" INPUT "Green"BASE"Reset" AND "Green"HEIGHT"Reset" TO CALCULATE THE AREA OF TRIANGLE "Green"***"Reset" \n");
                            printf("\n\t\t   "Cyan"I. YOUR INPUT"Reset" \n");
                            printf("\n\t\t\tEnter Base Value: ");
                            scanf("%f", &base);
                            printf("\t\t\tEnter Height Value: ");
                            scanf("%f", &height);

                            AREA = (base*height)/2;

                            printf("\n\n\t\t   "Cyan"II. RESULT"Reset" \n\n\t\t\tArea of Triangle is "Green"="Reset" %.2f\n\n", AREA);
                            printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                            scanf(" %c", &response1);
                            system("cls");


                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;

                do
                {
                    case 12:printf("\n\t\t_____________________________________________________________________________________");
                            printf("\n\t\t||__"Yellow"VOTER'S AGE QUALIFICATION"Reset"______________________________________________________||\n");
                            printf("\n\t\t\t    "Green"***"Reset" INPUT YOUR AGE TO CHECK IF YOU ARE QUALIFIED TO VOTE "Green"***"Reset" ");
                            printf("\n\n\t\t   "Cyan"I. Enter your Age"Reset": ");
                            scanf("%i", &voter);

                            if(voter>=18 && voter <=100){
                                printf("\n\t\t\t"Cyan"RESULT"Reset": "Green"Qualified"Reset"\n");
                                printf("\n\t\t\t"Cyan"NOTE"Reset":\n\t\t\t\t  If you are not yet registered voter. You can go to the ");
                                printf("\n\t\t\t      nearest Comelec office or Municipal Office to Register.\n\t\t\t      Thank you.\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else if(voter>=1 && voter<18){
                                printf("\n\t\t\t"Cyan"RESULT"Reset": "Red"Not Qualified"Reset"\n");
                                printf("\n\t\t\t"Cyan"NOTE"Reset":\n\t\t\t\tThe minumum age to be Qualified is 18 years old.\n\n");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }
                            else{
                                system("cls");
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\t\t||_________________________________________________________________________________||\n");
                                printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                                printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                                printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                                printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                                printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                                printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");;
                                printf("\n\t\t_____________________________________________________________________________________");
                                printf("\n\n\t\t   "Green"(!)"Reset" Do you want to use the program again?[Y/N]: ");
                                scanf(" %c", &response1);
                                system("cls");
                            }

                }while(response1=='Y'||response1=='y');
                if(response1=='N'||response1=='n'){
                    printf("\n\t\t_____________________________________________________________________________________");
                    printf("\n\t\t||_________________________________________________________________________________||");
                    printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                    scanf(" %c", &response2);
                    system("cls");
                }
                break;


                case 0: printf("\n\t\t_____________________________________________________________________________________");
                        printf("\n\t\t||___"Yellow"ARE YOU SURE?"Reset"_________________________________________________________________||");
                        printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                        scanf(" %c", &response2);
                        system("cls");
                        break;

                default:system("cls");
                        printf("\n\t\t_____________________________________________________________________________________");
                        printf("\n\t\t||_________________________________________________________________________________||\n");
                        printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
                        printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
                        printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
                        printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
                        printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
                        printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");;
                        printf("\n\t\t_____________________________________________________________________________________");
                        printf("\n\n\t\t   "Green"(!)"Reset" Back to "Yellow"Main Menu"Reset" ?[Y/N]: ");
                        scanf(" %c", &response2);
                        system("cls");

            }

        }while(response2=='Y'||response2=='y');
        if(response2=='N'||response2=='n'){
            printf("\n\t\t_____________________________________________________________________________________");
            printf("\n\t\t||_________________________________________________________________________________||\n");
            printf("\t\t  "Cyan"110101010101011110101010000101010101110101110101010101101010110110101010101010101\n");
            printf("\t\t  110111010111110000101010000110110101110101001010110101010101010000101010111101011"Reset"\n\n");
            printf("\n\t\t\t"Yellow"  IIIIII II  II   II   II   II II  II   II  II  IIII  II  II  II II    ");
            printf("\n\t\t\t    II   II  II  IIII  IIII II II II    II  II II  II II  II  II II            ");
            printf("\n\t\t\t    II   IIIIII II  II II IIII IIII      IIII  II  II II  II  II II            ");
            printf("\n\t\t\t    II   II  II IIIIII II  III II II      II   II  II II  II                   ");
            printf("\n\t\t\t    II   II  II II  II II   II II  II     II    IIII   IIII   II II "Reset"    ");
            printf("\n\n\n\t\t\t\t\t       "Green"***"Reset" GROUP 4: APOLLO "Green"***"Reset"             ");
            printf("\n\n\t\t  "Cyan"110101010101011110101010000101010101110101110101010101101010110110101010101010101\n");
            printf("\t\t  110111010111110000101010000110110101110101001010110101010101010000101010111101011"Reset"");
            printf("\n\t\t_____________________________________________________________________________________\n\n\n");
            break;
        }

    }

    else if(Start=='N'||Start=='n')
    {
        printf("\n\t\t_____________________________________________________________________________________");
        printf("\n\t\t||_________________________________________________________________________________||\n");
        printf("\t\t  "Cyan"110101010101011110101010000101010101110101110101010101101010110110101010101010101\n");
        printf("\t\t  110111010111110000101010000110110101110101001010110101010101010000101010111101011"Reset"\n\n");
        printf("\n\t\t\t"Yellow"  IIIIII II  II   II   II   II II  II   II  II  IIII  II  II  II II    ");
        printf("\n\t\t\t    II   II  II  IIII  IIII II II II    II  II II  II II  II  II II            ");
        printf("\n\t\t\t    II   IIIIII II  II II IIII IIII      IIII  II  II II  II  II II            ");
        printf("\n\t\t\t    II   II  II IIIIII II  III II II      II   II  II II  II                   ");
        printf("\n\t\t\t    II   II  II II  II II   II II  II     II    IIII   IIII   II II "Reset"    ");
        printf("\n\n\n\t\t\t\t\t       "Green"***"Reset" GROUP 4: APOLLO "Green"***"Reset"             ");
        printf("\n\n\t\t  "Cyan"110101010101011110101010000101010101110101110101010101101010110110101010101010101\n");
        printf("\t\t  110111010111110000101010000110110101110101001010110101010101010000101010111101011"Reset"");
        printf("\n\t\t_____________________________________________________________________________________\n\n\n");
        break;

    }

    else
    {
        printf("\n\t\t_____________________________________________________________________________________");
        printf("\n\t\t||_________________________________________________________________________________||\n");
        printf("\n\a\t\t\t\t      "Red"IIIIII IIIIII IIIIII IIIIII IIIIII  II II                 ");
        printf("\n\t\t\t\t      II     II  II II  II II  II II  II  II II                        ");
        printf("\n\t\t\t\t      IIII   IIIIII IIIIII II  II IIIIII  II II                        ");
        printf("\n\t\t\t\t      II     II II  II II  II  II II II                                ");
        printf("\n\t\t\t\t      IIIIII II  II II  II IIIIII II  II  II II "Reset"             \n ");
        printf("\n\t\t\t\t                "Yellow"***"Reset" INVALID INPUT "Yellow"***"Reset"    ");;
        printf("\n\t\t_____________________________________________________________________________________");
        printf("\n\n\t\t   "Green"(!)"Reset" Do you want to try again?[Y/N]: ");
        scanf(" %c", &welcomepage);
        system("cls");

    }

  }while(welcomepage=='Y'||welcomepage=='y');

    return 0;
}
