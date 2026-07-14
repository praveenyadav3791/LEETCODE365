class ParkingSystem {
public:
    vector<int>slots;
    ParkingSystem(int big, int medium, int small) {
        slots ={0,big, medium,small};
    }
    
    bool addCar(int carType) {
        if(slots[carType] > 0){
            slots[carType] --;
            return true;
        }
        return false;
        
    }
};

