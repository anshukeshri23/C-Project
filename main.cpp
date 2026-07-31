#include <iostream>
using namespace std;
class Vehicle{
    protected:
        string brand;
        string model;
        string vehicle_number;
        float rentpd;
        string status;
    public:
        Vehicle(string b, string m, string vn, float rpd, string s){
            brand = b;
            model = m;
            vehicle_number = vn;
            rentpd = rpd;
            status = s;
        }
        void display_vehicle(){
            std::cout << "************************************" << std::endl;
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Model: " << model << std::endl;
            std::cout << "Vehicle Number: " << vehicle_number << std::endl;
            std::cout << "Rent Per Day: " << rentpd << std::endl;
            std::cout << "Status: " << status << std::endl;
            std::cout << "-------------------------------------" << std::endl;
        }
};
class Car: public Vehicle{
    private:
        int seats;
        string fueltype;
        float mileage;
    public:
        Car(string b, string m, string vn, float rpd, string s, int st, string ft, float ml) : Vehicle(b, m, vn, rpd, s){
            seats = st;
            fueltype = ft;
            mileage = ml;
        }
        void display(){
            display_vehicle();
            std::cout << "Total Seats: " << seats << std::endl;
            std::cout << "Fuel Type: " << fueltype << std::endl;
            std::cout << "Mileage Per Ltr: " << mileage << "/km" << std::endl;
            std::cout << "************************************" << std::endl;
        }   
};
class bike: public Vehicle{
    private:
        int mileage;
        string helmet;
    public:
        bike(string b, string m, string vn, float rpd, string s, string h, int ml) : Vehicle(b, m, vn, rpd, s){
            helmet = h;
            mileage = ml;
        }
        void display(){
            display_vehicle();
            std::cout << "Helmet: " << helmet << std::endl;
            std::cout << "Mileage:" << mileage << std::endl;
            std::cout << "************************************" << std::endl;
        }   
};


int main()
{
   Car thar("Mahindra", "Thar 420", "BR39AG2061", 6500, "Booked", 4, "Diesel", 10);
   thar.display();
   bike passion("Hero", "X pro", "BR10U1215", 2000, "Not Booked", "YES", 45);
   passion.display();
    return 0;
}