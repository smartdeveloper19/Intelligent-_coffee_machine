#ifndef INTELLEGENTCOFFEEMACHINE_H
#define INTELLEGENTCOFFEEMACHINE_H
class intelligentCoffeeMachine{

private:
    bool m_isLidOpen;
    bool m_isFilterInserted;
    bool m_isCoffeeInserted;
    bool m_isWaterInserted;
    bool m_isLidClosed;
    bool m_isCooking;
    bool m_isFilled;
    bool m_takeCoffee;
    bool m_isEmpty;
    bool m_isJugFilled;
    bool m_isSwitchOn;
    int m_max_Water,m_max_Coffee,m_min_Water,m_min_Coffee;
public:
    intelligentCoffeeMachine();
    void coffeMenu();
    void swithOn();
    void openLid();
    void insertFilter();
    void insertCoffee(int amount);
    void insertWater(int amount);
    void closeLid();
    void startCooking();
    void cooked();
    void takeCoffee();
    bool isEmpty();
    void switchOff();

    int GET_MAX_WATER_LIMIT();
    int GET_MIN_WATER_LIMIT();
    int GET_MAX_COFFEE_LIMIT();
    int GET_MIN_COFFEE_LIMIT();
    bool getLidStatus();
    bool getFilterStatus();
    bool getWaterStatus();
    bool getJugStatus();
    bool getMachineStatus();

};
#endif // INTELLEGENTCOFFEEMACHINE_H
