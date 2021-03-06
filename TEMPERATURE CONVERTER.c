#include <windows.h> //use for gotoxy
#include <conio.h> //header file of getch
#include <stdio.h> //use for input/output
#include <stdlib.h> // for standard libraries (use in coditional statements(if-else and etc...)) system("cls")
#include <time.h>  //use for delay
#include <string.h> //use for strcmp


//GLOBAL function---> any method in this program can use this functions
void delay(ms){
    clock_t timeDelay = ms + clock();    //Step up the difference from clock delay
    while (timeDelay > clock());         //stop when the clock is higher than time delay
}


void gotoxy(short x,short y)
{
    COORD pos={x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

        //GLOBAL VARIABLES---> these variables can be used by any methods
            int z,r,from,to;
            char username[10],password[10];
            float C,F,K,Ra,Re;


//MAIN METHOD--> this will call the initial method and goes on
int main(){

    //variables are in the GLOBAL VARIABLE
    system("COLOR 0B"); //change the background and font of the system
    printf("!PASSWORD LENGTH IS 10 CHARACTERS ONLY\n");

    while(z<3){
            printf("\nE N T E R  U S E R N A M E: "), scanf("%s", &username);
            printf("E N T E R  P A S S W O R D: ");
                for(r=0;r<10;r++){ //10 max char of pass
                    password[r]=getch(); //acts as scanf for the password to store in the array [password]
                    printf("*");
                }
                password[r]='\0';

                
        
            //getch function prompts a user to press a character and that character isn't printed on screen.

                    //system_username=yestouno-----------> system_password=papasakami
                    if(strcmp(username,"yestouno")==0 && strcmp(password,"papasakami")==0){
                        printf("\n\nUSERNAME AND PASSWORD ARE CORRECT");
                        delay(2000),system("cls");
                        conversion_table(); //conversion_table calling
                    }


            else{
            z++;
            printf("\n\nEither username or password is incorrect\n");
            delay(500), system("cls");
            printf("You have %d trials left\n", 3-z);
            }
                if(z==3){
                    printf("You've reached the maximum number of attempts.\n");
                    exit(EXIT_SUCCESS);

                }
        }
}


/*==========================================================================================================*/
//conversion_table method
int conversion_table()
{

    //VERTICALS OUTER
    for(r=1;r<=33;r++){
        delay(5);
        gotoxy(10,r),printf("*");
        gotoxy(75,r),printf("*");
    }
        //VERTICALS INNER
        for(r=1;r<=30;r++){
            delay(5);
            gotoxy(25,r),printf("*");
            gotoxy(40,r),printf("*");
        }


    //HORIZONTALS
    for(r=1;r<=65;r++){
        delay(5);
        gotoxy(10+r,1),printf("*");
        gotoxy(10+r,3),printf("*");
        gotoxy(10+r,5),printf("*");
        gotoxy(10+r,10),printf("*");
        gotoxy(10+r,15),printf("*");
        gotoxy(10+r,20),printf("*");
        gotoxy(10+r,25),printf("*");
        gotoxy(10+r,30),printf("*");
        gotoxy(10+r,33),printf("*");

    }

        //HEADERS
        delay(5),gotoxy(25,2),printf("WELCOME TEMPERATURE CONVERTER");
        delay(5),gotoxy(15,4),printf("FROM");
        delay(5),gotoxy(32,4),printf("TO");
        delay(5),gotoxy(53,4),printf("FORMULAE");

            //FROM CELSIUS
            delay(5),gotoxy(14,6),printf("Celsius");
            delay(5),gotoxy(28,6),printf("Fahrenheit");
            delay(5),gotoxy(45,6),printf("F =  [C*1.8] + 32");
            delay(5),gotoxy(28,7),printf("Kelvin");
            delay(5),gotoxy(45,7),printf("K = C  + 273.15");
            delay(5),gotoxy(28,8),printf("Rankine");
            delay(5),gotoxy(45,8),printf("Ra =  [C*1.8]+ 32 + 459.67");
            delay(5),gotoxy(28,9),printf("Reaumur");
            delay(5),gotoxy(45,9),printf("Re =  C * 0.8");

                    //FROM FAHRENHEIT
                    delay(5),gotoxy(13,11),printf("Fahrenheit");
                    delay(5),gotoxy(28,11),printf("Celsius");
                    delay(5),gotoxy(45,11),printf("C = [F-32] / 1.8");
                    delay(5),gotoxy(28,12),printf("Kelvin");
                    delay(5),gotoxy(45,12),printf("K = [F+459.67] / 1.8");
                    delay(5),gotoxy(28,13),printf("Rankine");
                    delay(5),gotoxy(45,13),printf("Ra =  F + 459.67");
                    delay(5),gotoxy(28,14),printf("Reaumur");
                    delay(5),gotoxy(45,14),printf("Re = [F-32] / 2.25");

                        //FROM KELVIN
                        delay(5),gotoxy(14,16),printf("Kelvin");
                        delay(5),gotoxy(28,16),printf("Celsius");
                        delay(5),gotoxy(45,16),printf("C = K - 273.15");
                        delay(5),gotoxy(28,17),printf("Fahrenheit");
                        delay(5),gotoxy(45,17),printf("F = [K*1.8] - 459.67");
                        delay(5),gotoxy(28,18),printf("Rankine");
                        delay(5),gotoxy(45,18),printf("Ra = K * 1.8");
                        delay(5),gotoxy(28,19),printf("Reaumur");
                        delay(5),gotoxy(45,19),printf("Re = [K-273.15] * 0.8");

                            //FROM RANKINE
                            delay(5),gotoxy(14,21),printf("Rankine");
                            delay(5),gotoxy(28,21),printf("Celsius");
                            delay(5),gotoxy(45,21),printf("C = [Ra-32-459.67] / 1.8");
                            delay(5),gotoxy(28,22),printf("Fahrenheit");
                            delay(5),gotoxy(45,22),printf("F =  Ra - 459.67");
                            delay(5),gotoxy(28,23),printf("Kelvin");
                            delay(5),gotoxy(45,23),printf("K =  Ra / 1.8");
                            delay(5),gotoxy(28,24),printf("Reaumur");
                            delay(5),gotoxy(45,24),printf("Re = [Ra-32-459.67] / 2.25");

                                //FROM REAUMUR
                                delay(5),gotoxy(14,26),printf("Reaumur");
                                delay(5),gotoxy(28,26),printf("Celsius");
                                delay(5),gotoxy(45,26),printf("C =  Re * 1.25");
                                delay(5),gotoxy(28,27),printf("Fahrenheit");
                                delay(5),gotoxy(45,27),printf("F =  [Re*2.25] + 32");
                                delay(5),gotoxy(28,28),printf("Kelvin");
                                delay(5),gotoxy(45,28),printf("K =  [Re*1.25]+ 273.15");
                                delay(5),gotoxy(28,29),printf("Rankine");
                                delay(5),gotoxy(45,29),printf("Ra =  [Re*2.25]+ 32 + 459.67");

                                //FORMULA FACTORS
                                delay(5),gotoxy(32,31),printf("TEMPERATURE CONVERTER");
                                delay(5),gotoxy(25,32),printf("9/5 = 1.8    9/4 = 2.25    10/8 = 1.25");

                                    delay(5),gotoxy(30,35),printf("PRESS ANY KEY TO CONTINUE...");

                                    getch();
                                    delay(500),system("cls");
                                    process();

}
/*==============================================================================================================================================================================================*/
//process method
int process(){

    delay(300);
    /////////////////////////////////////////////VERTICALS
        for(r=1;r<=18;r++){
            gotoxy(10,r),printf("*");
            gotoxy(75,r),printf("*");
        }

        for(r=1;r<=7;r++){
            gotoxy(3,r+18),printf("*");
            gotoxy(82,r+18),printf("*");
        }

    /////////////////////////////////////////////////HORIZONTALS
        for(r=1;r<=65;r++){
        gotoxy(10+r,1),printf("*"); //1st
        gotoxy(10+r,9),printf("*"); //2nd
        gotoxy(10+r,11),printf("*"); //3rd
        gotoxy(10+r,17),printf("*"); //4th
    }

        for(r=1;r<=80;r++){
            gotoxy(r+2,19),printf("*"); //5th
            gotoxy(r+2,26),printf("*"); //6th
        }


        //CONVERSION STATEMENTS
        CONVERSION:
            gotoxy(12,2),printf("Choose the digit below of the unit you want to convert:\n");
            gotoxy(12,3),printf("\t[1] Celsius\n");
            gotoxy(12,4),printf("\t[2] Fahrenheit\n");
            gotoxy(12,5),printf("\t[3] Kelvin\n");
            gotoxy(12,6),printf("\t[4] Rankine\n");
            gotoxy(12,7),printf("\t[5] Reaumur\n");
            gotoxy(12,8),printf("\t[6] Exit");
            gotoxy(68,2),scanf("%d", &from);

            if(from==1){
             //CELSIUS
                gotoxy(12,10),printf("Enter the amount of Celsius: "), scanf("%f", &C);
                gotoxy(12,13),printf("\t[1] Fahrenheit\n");
                gotoxy(12,14),printf("\t[2] Kelvin\n");
                gotoxy(12,15),printf("\t[3] Rankine\n");
                gotoxy(12,16),printf("\t[4] Reaumur\n");
                gotoxy(12,12),printf("Select the digit below of the unit of conversion: "); scanf("%d", &to);
                    if(to==1){ //C-F
                        F=(C*1.8)+32;
                        gotoxy(12,18),printf("%.2f C is equal to %.2f F", C,F);
                        goto Celsius_Trivia;
                    }
                        else if(to==2){ //C-K
                            K= C + 273.15;
                            gotoxy(12,18),printf("%.2f C is equal to %.2f K", C,K);
                            goto Celsius_Trivia;
                        }
                            else if(to==3){ //C-Ra
                                Ra= (C*1.8)+ 32 + 459.67;
                                gotoxy(12,18),printf("%.2f C is equal to %.2f Ra", C,Ra);
                                goto Celsius_Trivia;
                            }
                                else if(to==4){ //C-Re
                                    Re=C*0.8;
                                    gotoxy(12,18),printf("%.2f C is equal to %.2f Re", C,Re);
                                    goto Celsius_Trivia;
                                }

                                else{
                                    gotoxy(12,18),printf("Your choice is not in the ranged of 1-4 ");
                                    delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                                    getch();
                                    system("cls");
                                    process();
                                }

                    //CELSIUS TRIVIA
                    Celsius_Trivia:
                    gotoxy(5,20),printf("DID YOU KNOW? CELSIUS...");
                    gotoxy(5,21),printf("\tHaving a scale for measuring temperature on which the boiling point of \n");
                    gotoxy(5,22),printf("water is at 100 degrees and the freezing point of water is at 0 degrees.\n");
                    delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                    getch();
                    system("cls");
                    process();
                 }
/*==============================================================*/
            //FAHRENHEIT
            else if (from==2){
                gotoxy(12,10),printf("Enter the amount of Fahrenheit: "), scanf("%f", &F);
                gotoxy(12,13),printf("\t[1] Celsius\n");
                gotoxy(12,14),printf("\t[2] Kelvin\n");
                gotoxy(12,15),printf("\t[3] Rankine\n");
                gotoxy(12,16),printf("\t[4] Reaumur\n");
                gotoxy(12,12),printf("Select the digit below of the unit of conversion: "); scanf("%d", &to);
                    if(to==1){ //F-C
                        C = (F- 32) / 1.8;
                        gotoxy(12,18),printf("%.2f F is equal to %.2f C", F,C);
                        goto Farenheit_Trivia;
                    }
                        else if(to==2){ //F-K
                            K = (F+459.67) /1.8;
                            gotoxy(12,18),printf("%.2f F is equal to %.2f K", F,K);
                            goto Farenheit_Trivia;
                        }
                            else if(to==3){ //F-Ra
                                Ra = F + 459.67;
                                gotoxy(12,18),printf("%.2f F is equal to %.2f Ra", F,Ra);
                                goto Farenheit_Trivia;
                            }
                                else if(to==4){ //F-Re
                                    Re = (F-32) / 2.25;
                                    gotoxy(12,18),printf("%.2f F is equal to %.2f Re", F,Re);
                                    goto Farenheit_Trivia;    
                                }
                                    else{
                                        gotoxy(12,18),printf("Your choice is not in the ranged of 1-4 ");
                                        delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                                        getch();
                                        system("cls");
                                        process();
                                    }
                    //FAREHNHEIT TRIVIA
                    Farenheit_Trivia:
                            gotoxy(5,20),printf("DID YOU KNOW? FAHRENHEIT...");
                            gotoxy(5,21),printf("\tHaving a scale for measuring temperature on which the boiling point of \n");
                            gotoxy(5,22),printf("water is at 212 degrees above zero and the freezing point is at 32 degrees \n");
                            gotoxy(5,23),printf("above zero.\n");
                            delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                            getch();
                            system("cls");
                            process();
            }
/*==============================================================*/
             //KELVIN
             else if(from==3){
                gotoxy(12,10),printf("Enter the amount of Kelvin: "), scanf("%f", &K);
                gotoxy(12,13),printf("\t[1] Celsius\n");
                gotoxy(12,14),printf("\t[2] Fahrenheit\n");
                gotoxy(12,15),printf("\t[3] Rankine\n");
                gotoxy(12,16),printf("\t[4] Reaumur\n");
                gotoxy(12,12),printf("Select the digit below of the unit of conversion: "); scanf("%d", &to);
                    if(to==1){ //K-C
                        C = K-273.15;
                        gotoxy(12,18),printf("%.2f K is equal to %.2f C", K,C);
                        goto Kelvin_Trivia;
                        
                    }
                        else if(to==2){ //K-F
                            F = (K*1.8) - 459.67;
                            gotoxy(12,18),printf("%.2f K is equal to %.2f F", K,F);
                            goto Kelvin_Trivia;
                        }
                            else if(to==3){ //K-Ra
                                Ra = K*1.8;
                                gotoxy(12,18),printf("%.2f K is equal to %.2f Ra", K,Ra);
                                goto Kelvin_Trivia;
                            }
                                else if(to==4){ //K-Re
                                    Re = (K-273.15) * 0.8;
                                    gotoxy(12,18), printf("%.2f K is equal to %.2f Re", K,Re);
                                    goto Kelvin_Trivia;
                                }
                                    else{
                                        gotoxy(12,18),printf("Your choice is not in the ranged of 1-4 ");
                                        delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                                        getch();
                                        system("cls");
                                        process();
                                    }
                    //KELVIN TRIVIA
                    Kelvin_Trivia:
                            gotoxy(5,20),printf("DID YOU KNOW? KELVIN...");
                            gotoxy(5,21),printf("\tThe base unit of temperature in the International System of Units that is\n");
                            gotoxy(5,22),printf("equal to 1/273.16 of the Kelvin scale temperature of the triple point of \n");
                            gotoxy(5,23),printf("water.\n");
                            delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                            getch();
                            system("cls");
                            process();
            }
/*==============================================================*/
        //RANKINE
        else if (from==4){
                gotoxy(12,10),printf("Enter the amount of Rankine: "), scanf("%f", &Ra);
                gotoxy(12,13),printf("\t[1] Celsius\n");
                gotoxy(12,14),printf("\t[2] Fahrenheit\n");
                gotoxy(12,15),printf("\t[3] Kelvin\n");
                gotoxy(12,16),printf("\t[4] Reaumur\n");
                gotoxy(12,12),printf("Select the digit below of the unit of conversion: "); scanf("%d", &to);
                    if(to==1){ //Ra-C
                        C = (Ra-32-459.67) / 1.8;
                        gotoxy(12,18),printf("%.2f Ra is equal to %.2f C", Ra,C);
                        goto Rankine_Trivia;
                    }
                        else if(to==2){ //Ra-F
                            F = Ra-459.67;
                            gotoxy(12,18),printf("%.2f Ra is equal to %.2f F", Ra,F);
                            goto Rankine_Trivia;
                        }
                            else if(to==3){ //Ra-K
                                K= Ra/1.8;
                                gotoxy(12,18),printf("%.2f Ra is equal to %.2f K", Ra,K);
                                goto Rankine_Trivia;
                            }
                                else if(to==4){ //Ra-Re
                                    Re = (Ra-32-459.67)/2.25;
                                    gotoxy(12,18), printf("%.2f Ra is equal to %.2f Re", Ra,Re);
                                    goto Rankine_Trivia;
                                }
                                    else{
                                        gotoxy(12,18),printf("Your choice is not in the ranged of 1-4 ");
                                        delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                                        getch();
                                        system("cls");
                                        process();
                                    }
                    //RANKINE TRIVIA
                    Rankine_Trivia:
                            gotoxy(5,20),printf("DID YOU KNOW? RANKINE...");
                            gotoxy(5,21),printf("\tRelating to an absolute-temperature scale on which the unit of \n");
                            gotoxy(5,22),printf("measurement equals a Fahrenheit degree and on which the freezing point of \n");
                            gotoxy(5,23),printf("water is 491.67 degrees and the boiling point 671.67 degrees. \n");
                            delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                            getch();
                            system("cls");
                            process();
                            
        }
/*==============================================================*/
        //REAUMUR
        else if(from==5){

                gotoxy(12,10),printf("Enter the amount of Reaumur: "), scanf("%f", &Re);
                gotoxy(12,13),printf("\t[1] Celsius\n");
                gotoxy(12,14),printf("\t[2] Fahrenheit\n");
                gotoxy(12,15),printf("\t[3] Kelvin\n");
                gotoxy(12,16),printf("\t[4] Rankine\n");
                gotoxy(12,12),printf("Select the digit below of the unit of conversion: "); scanf("%d", &to);
                    if(to==1){ //Re-C
                        C = Re*1.25;
                        gotoxy(12,18),printf("%.2f Re = %.2f C", Re,C);
                        goto Reaumur_Trivia;
                    }
                        else if(to==2){ //Re-F
                            F = (Re*2.25) + 32;
                            gotoxy(12,18),printf("%.2f Re = %.2f F", Re,F);
                            goto Reaumur_Trivia;
                        }
                            else if(to==3){ //Re-K
                                K =  (Re*1.25) + 273.15;
                                gotoxy(12,18),printf("%.2f Re = %.2f K", Re,K);
                                goto Reaumur_Trivia;
                            }
                                else if(to==4){ //Re-K
                                    Ra =  (Re*2.25)+ 32+ 459.67;
                                    gotoxy(12,18),printf("%.2f Re = %.2f Ra", Re,Ra);
                                    goto Reaumur_Trivia;
                                }
                                    else{
                                        gotoxy(12,18),printf("Your choice is not in the ranged of 1-4 ");
                                        delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                                        getch();
                                        system("cls");
                                        process();
                                    }
                    //REAUMUR TRIVIA
                    Reaumur_Trivia:
                        gotoxy(5,20),printf("DID YOU KNOW? REAUMUR...");
                        gotoxy(5,21),printf("\tRelating to a thermometric scale on which the boiling point of water is at\n");
                        gotoxy(5,22),printf("80 degrees above the zero of the scale and the freezing point is at zero.\n");
                        delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
                        getch();
                        system("cls");
                        process();
        }
        
        else if(from==6){
            system("cls");
            thanks();
        }
        
        
        else{
            gotoxy(12,10),printf("Invalid unit. Input must be ranged from 1-6");
            delay(20),gotoxy(30,28),printf("PRESS ANY KEY TO CONTINUE...");
            getch();
            system("cls");
            process();
        }
        
}
/*==============================================================================================================================================================================================*/
//thanks method
int thanks(){

    /*increment by 5*/
        for(r=1;r<=5;r++){

            delay(50);
            //T1
            gotoxy(r+10,1),printf("*");
            gotoxy(13,r),printf("*");
            //H1
            gotoxy(17,r),printf("*");
            gotoxy(16+r,3),printf("*");
            gotoxy(21,r),printf("*");
            //A1
            gotoxy(23,r),printf("*");
            gotoxy(22+r,1),printf("*");
            gotoxy(22+r,3),printf("*");
            gotoxy(27,r),printf("*");
            //N1
            gotoxy(29,r),printf("*");
            gotoxy(28+r,r),printf("*");
            gotoxy(33,r),printf("*");
            //K1
            gotoxy(35,r),printf("*");
            //S1
            gotoxy(39+r,1),printf("*");
            gotoxy(39+r,3),printf("*");
            gotoxy(39+r,5),printf("*");

            //A2
            gotoxy(48,r),printf("*");
            gotoxy(47+r,1),printf("*");
            gotoxy(47+r,3),printf("*");
            gotoxy(52,r),printf("*");
            //N2
            gotoxy(54,r),printf("*");
            gotoxy(53+r,r),printf("*");
            gotoxy(58,r),printf("*");
            //D2
            gotoxy(60,r),printf("*");

            //H3
            gotoxy(2,6+r),printf("*");
            gotoxy(r+1,9),printf("*");
            gotoxy(6,6+r),printf("*");
            //A3
            gotoxy(8,6+r),printf("*");
            gotoxy(r+7,7),printf("*");
            gotoxy(r+7,9),printf("*");
            gotoxy(12,6+r),printf("*");

            //E3
            gotoxy(20,6+r),printf("*");
            gotoxy(r+19,7),printf("*");
            gotoxy(r+19,9),printf("*");
            gotoxy(r+19,11),printf("*");

            //A4
            gotoxy(28,6+r),printf("*");
            gotoxy(r+27,7),printf("*");
            gotoxy(r+27,9),printf("*");
            gotoxy(32,6+r),printf("*");

            //N5
            gotoxy(36,6+r),printf("*");
            gotoxy(35+r,6+r),printf("*");
            gotoxy(40,6+r),printf("*");
            //I5
            gotoxy(42,6+r),printf("*");
            //C5
            gotoxy(44,6+r),printf("*");
            gotoxy(r+43,7),printf("*");
            gotoxy(r+43,11),printf("*");
            //E5
            gotoxy(50,6+r),printf("*");
            gotoxy(r+49,7),printf("*");
            gotoxy(r+49,9),printf("*");
            gotoxy(r+49,11),printf("*");

            //D6
            gotoxy(58,r+6),printf("*");
            //A6
            gotoxy(64,6+r),printf("*");
            gotoxy(r+63,7),printf("*");
            gotoxy(r+63,9),printf("*");
            gotoxy(68,6+r),printf("*");
        }

        /*increment by 3x*/
        for(r=1;r<=3;r++){
            //K1
            gotoxy(35+r,4-r),printf("*");
            gotoxy(35+r,r+2),printf("*");
            //S1
            gotoxy(40,r),printf("*");
            gotoxy(44,r+2),printf("*");
            //D2
            gotoxy(59+r,1),printf("*");
            gotoxy(61+r,r),printf("*");
            gotoxy(61+r,6-r),printf("*");
            gotoxy(59+r,5),printf("*");

            //V3
            gotoxy(14,6+r),printf("*");
            gotoxy(13+r,8+r),printf("*");
            gotoxy(19-r,8+r),printf("*");
            gotoxy(18,6+r),printf("*");

            //D6
            gotoxy(57+r,7),printf("*");
            gotoxy(59+r,6+r),printf("*");
            gotoxy(59+r,12-r),printf("*");
            gotoxy(57+r,11),printf("*");
            //Y6
            gotoxy(69+r,6+r),printf("*");
            gotoxy(71+r,10-r),printf("*");
            gotoxy(72,8+r),printf("*");
            }

            exit(EXIT_SUCCESS); //this is an exit function, it terminates the whole program.
			delay(500);
}



