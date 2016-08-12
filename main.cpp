#include <intellegentcoffeemachine.h>
#include<iostream>
using namespace std;

int main()
{
    intelligentCoffeeMachine coffeeMaker;
    bool stopProgram=true;
    int key=0,coffee,water;
    coffeeMaker.coffeMenu();

    while(stopProgram){
        cin>>key;
        switch(key){
        case 1:{
                if(coffeeMaker.getJugStatus())
                {

                    if(!coffeeMaker.getMachineStatus()){
                        cout<<"Here is your Coffee !! \n";
                        cout<<"Thanks you for using Smart Coffee \n";
                    }
                    else{
                        cout<<"Machine is still switched on !!\n";
                        cout<<"Please switch off Machine to take coffee Thanks !!\n";

                    }
                }
                else{
                    cout<<"Jug is not being filled \n";


                }
                coffeeMaker.coffeMenu();
                break;
            }
        case 2:{
                if(water>coffeeMaker.GET_MIN_WATER_LIMIT() && water<coffeeMaker.GET_MAX_WATER_LIMIT())
                {
                    if(coffee>coffeeMaker.GET_MIN_COFFEE_LIMIT() && coffee<coffeeMaker.GET_MAX_COFFEE_LIMIT())
                    {
                        if(coffeeMaker.getLidStatus()){
                            if(coffeeMaker.getMachineStatus()){
                                coffeeMaker.startCooking();}
                            else
                            {
                            cout<<"Please first Turn on the machine !! \n";
                            }
                        }
                        else{
                            cout<<"Lid is not closed..\n";
                        }


                    }

                    else{
                        cout<<"insufficent coffee \n Please insert water between 10 gram and 100 gram :";
                        //                        if(coffeeMaker.getLidStatus()){
                        //                            cin>>coffee;

                        //                        }
                        //                        else{
                        //                            //  cout<<"\nLid is closed !! \n";
                        //                            cout<<"\nPlease open Lid to insert Coffee !!\n";


                        //                        }

                    }
                }
                else{
                    cout<<"insufficent water \n Please insert water between 100 ml and 400 ml";
                    //                    if(coffeeMaker.getLidStatus()){
                    //                        cin>>water;

                    //                    }
                    //                    else{
                    //                        //    cout<<"\nLid is closed !! \n";
                    //                        cout<<"\nPlease open Lid to insert Water !!\n";


                    //                    }

                }
                coffeeMaker.coffeMenu();
                break;
            }
        case 3:{
                if(!coffeeMaker.getLidStatus())
                {
                    coffeeMaker.openLid();

                }
                else{

                    cout<<"Lid is already being opened \n";

                }
                coffeeMaker.coffeMenu();
                break;
            }
        case 4:{
                if(coffeeMaker.getLidStatus())
                {
                    coffeeMaker.insertFilter();

                }
                else{
                    cout<<"Lid is not opened !! \n";
                    cout<<"First open Lid to Insert filter \n";


                }
                coffeeMaker.coffeMenu();
                break;
            }
        case 5:{

                if(coffeeMaker.getLidStatus())
                {
                    if(coffeeMaker.getFilterStatus()){
                        cout<<"Please Enter Amount of Coffee : ";
                        cin>>coffee;
                        coffeeMaker.insertCoffee(coffee);

                    }
                    else{

                        cout<<"Filter is not being inserted \n";

                    }
                }
                else{
                    cout<<"Lid is not opened \n";


                }

                coffeeMaker.coffeMenu();

                break;
            }
        case 6:{
                if(coffeeMaker.getLidStatus()){
                    if(coffeeMaker.getFilterStatus()){
                        cout<<"Please Enter Amount of Water : ";
                        cin>>water;
                        coffeeMaker.insertWater(water);
                        }
                    else{

                        cout<<"Filter is not being inserted !!";
                    }

                }
                else{

                    cout<<"Lid is closed  \n ";
                    cout<<"Please open Lid to insert water \n";

                }

                coffeeMaker.coffeMenu();
                break;
            }
        case 7:{ // for closing Lid
                if(coffeeMaker.getLidStatus()){
                    coffeeMaker.closeLid();


                }
                else{
                    cout<<"Lid is already closed \n ";
                    coffeeMaker.coffeMenu();

                }

                coffeeMaker.coffeMenu();
                break;
            }
        case 8:{ // for switch off
                if(coffeeMaker.getMachineStatus())
                {
                    coffeeMaker.switchOff();

                }
                else{
                    cout<<"Machine is already Switched off \n";


                }
                coffeeMaker.coffeMenu();
                break;
            }
        case 9:{ // Switch On
                if(!coffeeMaker.getMachineStatus())
                {
                    coffeeMaker.swithOn();

                }
                else{
                    cout<<"Machine is already Switched on \n";


                }
                coffeeMaker.coffeMenu();
                break;

            }
        case 10:
            {
                stopProgram=false;
                cout<<"Program is terminating ...\n";
                break;

            }
        default:{
                cout<<"Wrong option Selected \n";
            }
        }

    }

    return 0;
}
