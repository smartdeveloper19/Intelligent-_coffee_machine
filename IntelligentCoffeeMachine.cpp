#include <intellegentcoffeemachine.h>
#include <iostream>
#include <ctime>
#include<windows.h>
using namespace std;
intelligentCoffeeMachine::intelligentCoffeeMachine(){
    m_isLidOpen=false;
    m_isFilterInserted=false;
    m_isCoffeeInserted=false;
    m_isWaterInserted=false;
    m_isCooking=false;
    m_isFilled=false;
    m_isJugFilled=false;
    m_takeCoffee=false;
    m_isEmpty=false;
    m_isSwitchOn=false;
    m_max_Water=400;  // water in millilitter
    m_max_Coffee=100;  // Coffee in grams
    m_min_Water=100;
    m_min_Coffee=10;
}

void intelligentCoffeeMachine::coffeMenu(){
	cout << " \t ***Solution of Intellegent Coffee machine By Mujahid Abbas*** "<<endl;
    cout << " \t Please select option below "<<endl;
    cout << " 1 - Take Coffee" <<endl;
    cout << " 2 - Start Cooking" <<endl;
    cout << " 3 - Open Lid" <<endl;
    cout << " 4 - Insert Filter" <<endl;
    cout << " 5 - Insert Coffee" <<endl;
    cout << " 6 - Insert Water" <<endl;
    cout << " 7 - Close Lid" <<endl;
    cout << " 8 - Switch Off" <<endl;
    cout << " 9 - Switch On" <<endl;
    cout << " 10 - Terminate Program" <<endl;
    cout <<" >>";


}
void intelligentCoffeeMachine::swithOn(){
    m_isSwitchOn=true;
    cout <<" Switched on \n";
}
void intelligentCoffeeMachine::openLid(){

    m_isLidOpen=true;
    cout <<" Lid is opened \n";
}

void intelligentCoffeeMachine::insertFilter(){

    m_isFilterInserted=true;
    cout <<" Filter Inserted \n";
}
void intelligentCoffeeMachine::insertCoffee(int amount){
    if(amount>m_min_Coffee && amount<m_max_Coffee)
        m_isCoffeeInserted=true;
    else
        cout<<"please intsert minimum 10g and maximum 100g Coffee";
}

void intelligentCoffeeMachine::insertWater(int amount){
    if(amount>m_min_Water && amount<m_max_Water){
        m_isWaterInserted=true;
    }
    else
        cout<<"please intsert minimum 100 ml and maximum 400ml Water :";
}
void intelligentCoffeeMachine::closeLid(){

    m_isLidOpen=false;
    cout <<" Lid is closed \n";
}
void intelligentCoffeeMachine::startCooking(){
    cout <<" Please wait cooking... \n";
    Sleep(10000);
    m_isCooking=true;
    m_isJugFilled=true;
    cout <<" Coffee is being Cooked and ready to take \n";
}
void intelligentCoffeeMachine::switchOff(){
    m_isSwitchOn=false;
    cout<<"Machine is switched off \n";

        }
void intelligentCoffeeMachine::takeCoffee(){
    m_takeCoffee=true;
    m_isEmpty=true;
    cout <<" Please take coffee \n";
}
bool intelligentCoffeeMachine::getMachineStatus(){
    cout<<"Machine status = "<<m_isSwitchOn<<endl;
    return m_isSwitchOn;

}
bool intelligentCoffeeMachine::getLidStatus(){

    return m_isLidOpen;
}

bool intelligentCoffeeMachine::getFilterStatus(){

    return m_isFilterInserted;

}
bool intelligentCoffeeMachine::getJugStatus(){

    return m_isJugFilled;
}
int intelligentCoffeeMachine::GET_MAX_COFFEE_LIMIT(){

    return m_max_Coffee;
}

int intelligentCoffeeMachine::GET_MIN_COFFEE_LIMIT(){

    return m_min_Coffee;
}
int intelligentCoffeeMachine::GET_MAX_WATER_LIMIT(){

    return m_max_Water;

}
int intelligentCoffeeMachine::GET_MIN_WATER_LIMIT(){

    return m_min_Water;
}







