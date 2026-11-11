#include <iostream> 
#include <string> 
using namespace std;
class Donor  {

private:
    int DonorId ; 
    string DonorName ;
    int age ; 
    string bloodGroup ; 
   static int DonorCount ; 
public:
 void  addDonor() { 

    cout << "Enter Donor Name : " ;
    cin >> DonorName ;
    cout << "Enter Donor Age : " ;
    cin >> age ; 
    cout << "Enter Donor Blood Group : " ;
    cin >> bloodGroup ; 
    DonorId = DonorCount ;
    DonorCount++ ; 
cout << "Donor Registered Successfully with Donor ID : " << DonorId << endl ; 
  }

  void displayDonor() { 
    cout << "Donor Name : " << DonorName << endl ; 
    cout << "Donor Age : " << age << endl ; 
    cout << "Donor Blood Group : " << bloodGroup << endl ; 
    
  }
  string getBloodGroup() { 
    return bloodGroup ; }

  string getDonorName() { 
    return DonorName ; }

    int getId() { 
        return DonorId ; 
    } 

};

int Donor::DonorCount = 1;