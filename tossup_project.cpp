/*
    ACADEMIC INTEGRITY PLEDGE
- I have not used source code obtained from another
student nor any other unauthorized source, either
modified or unmodified.

- All source code and documentation used in my program
is either my original work or was derived by me from
the source code published in the textbook for this
course or presented in class.

- I have not discussed coding details about this project
with anyone other than my instructor. I understand
that I may discuss the concepts of this program with
other students and that another student may help me
debug my program so long as neither of us writes
anything during the discussion or modifies any
computer file during the discussion.

- I have violated neither the spirit nor letter of these
restrictions.

Signed: Suman Khadka Date:9/15/2022
COPYRIGHT (C) 2022 (Suman Khadka). All Rights Reserved.

(From June 25-July 1, 1862, the Civil War and the attention of two nations focused on the area near
Richmond, Virginia. A series of battles took place in which a Confederate army under General Robert E.
Lee drove back General George B. McClellan's Union forces and thwarted the Northern attempt to
capture the Confederate capital of Richmond, Va. McClellan was forced to retreat from a position 4
miles (6 km) east of the Confederate capital to a new base of operations at Harrison's Landing on the
James River.
The purpose of this assignment is to create a (very) simple simulation which re-enacts the Battle of
Seven Days using coin flip)
author (Suman Khadka)
version 1.01 (9/15/2022)
*/



#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <cstdlib>

using namespace std;
int main(){
    int myScore, compScore, coin, high;  //declaring variables
    myScore = 0;
    compScore = 0;
    coin = 0;
    string userGuess;
    string correct, result;
                            //the following will print the beginning section( intro section) of the game
    std::cout<<std::setw(62)<<"    LET THE"<<endl;     //setw() is used to provide the width of the field && space is given to match the exact output as given in the question
    cout<<" \t\t\t\t           FLIP OF THE COIN REWRITE HISTORY"<<endl;
    cout<<" "<<endl;
    cout<<setw(60)<< "\t\t/----------------------\\"<<endl;
    cout<<setw(60)<<"\t\t| RETURN TO SEVEN DAYS |"<<endl;
    cout<<setw(60)<<"\t\t\\----------------------/\n"<<endl;

    cout<<"\t\t\t\tIt is July 1, 1862, the final day"
              " of the Battle of Seven Days...\n\n"

              "\t\t\t\tIn this re-enactment of the second day of battle, you are\n"
              "\t\t\t\tGeorge B. McClellan in charge of the Unionists\n\n"

              "\t\t\t\tWe will flip a coin to determine the outcome of the small\n"
              "\t\t\t\tbattles for territories within the Seven Days area\n\n"

              "\t\t\t\tYou have to predict whether the coin will come up heads or tails..."<<endl;
    cout<<""<<endl;
                       //right after the beginning game title, the opening instructions will be prompted to the player
    cout<<"Now General McClellan\n"
          "Do you predict the coin will come out\n"
          "heads (H) or tails (T)?\n\n";

    while(true){    //ask the player to enter something unless the condition is not met

         for (int i = 1; i<=9; i++){ // the name of the individual
//battle based on the value of the loop index variable.

                    switch(i){
                        case 1:
                            cout<<"Battle 1- Little Round Top\n"<<endl;
                            break;
                        case 2:
                            cout<<"Battle 2- Cemetry Ridge"<<endl;
                            break;
                        case 3:
                            cout<<"Battle 3- Devils Den"<<endl;
                            break;
                        case 4:
                            cout<<"Battle 4- The Wheatfield"<<endl;
                            break;
                        case 5:
                            cout<<"Battle 5- The Peach Orchard"<<endl;
                            break;
                        case 6:
                            cout<<"Battle 6- Culps Hill"<<endl;
                            break;
                        case 7:
                            cout<<"Battle 7- Zieglers Grove"<<endl;
                            break;
                        case 8:
                            cout<<"Battle 8- Seminary Ridge"<<endl;
                            break;
                        default:
                            cout<<"Battle 9- Gettysburg"<<endl;
                            }
        cout<<"Choose H or T: ";



        cin>>userGuess;
        if (userGuess == "T"){   //if the user guess was T, then Tails will be stored in the variable correct
            correct = "Tails";
        }else{                   //if other than T
                correct ="Heads" ;
                }
            if (userGuess != "H"&& userGuess != "T"){ //user guess is not  H and T then set the guess to H
                userGuess = "H";
            }

        cout<<"You have chosen "<<userGuess<<" \nStand by to fight, General McClellan..."<<endl; //display in letter
        cout<<"\n"<<endl;
        cout<<"You have chosen "<<correct; //display in words
        cout<<" "<<endl;

    std::srand(std::time(0));   //initialize random number generator
    int check;
    check = rand()%2 + 0;      //built-in STL function to generate the random number, number will be generated between 0 and 2 i.e. either 0 or 1

    cout<<"\nThe result of the coin flip was "<<check<<endl;  //rand() will generate either 0 or 1 randomly

         if (check==0){
            result= "Heads";
         }else{
            result="Tails";
         }

         cout<<"The result of the coin flip was "<<result<<endl;

         //If the user guess and the random result are the same print the following
    if (correct == result){
        myScore +=1;    //add one to the human's score
        cout<<"\nWell done, General \n"
                "McClellan...\n"
                "You have defeated Lee\n";
    } else{
        compScore +=1;    //add one to the computer score
        cout<<"\nI am sorry, General\n"
                "McClellan...\n"
                "but the battle goes to Lee\n";
        }

        cout<<" "<<endl;




    cout<<"So far: McClellan "<<myScore<<" victories,\nLee "<<compScore<<"\n"<<endl;   //summary of the action. It is like scoreboard

      }
       //if the human’s score is greater than the computer’s, print the following
         if (myScore > compScore){
            cout<<"\nThe results show that\n"
                    "George B. McClellan won the\n"
                    "majority of the battles\n"
                    "and is thus declared the victor\n"
                    "on July 2 1863.";
         }else{
            cout<<"\nThe results show that\n"
                    "Robert E Lee won the\n"
                    "majority of the battles\n"
                    "and is thus declared the victor\n"
                    "on July 2 1863.";
                    }
            cout<<"\n"<<endl;



    cout<<""<<endl;
    cout<<setw(60)<<"\t\t\t\tIn the actual Battle at Seven Days,\n"   //the end title
                    "\t\t\t\tthe Northern troops turned back Lee's\n"
                    "\t\t\t\tfinal assaults at Malvern Hill (July "
                    "1)....\n\n"
                    "\t\t\t\tThe Confederates lost about 16,000 men...\n"
                    "\t\t\t\tThe Unionists lost about 20,000 men ...\n\n"
                    "\t\t\t\tMcClellan's failure to capture"
                    "Richmond, and the subsequent\n"
                    "\t\t\t\twithdrawal of the Union's Army from"
                    "the Yorktown Peninsula,\n \t\t\t\tsignified the"
                    "tend of the Peninsular Campaign.\n";
    return 0;
    }
}













