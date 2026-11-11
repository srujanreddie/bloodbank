#include <iostream>
#include "Donor.h"
#include <vector>
using namespace std; 
int main() { 

     int choice;
    vector<Donor> donorList;
   
    while (true) {
        cout << "\n========================================================================\n";
        cout << "                  BLOOD BANK MANAGEMENT SYSTEM                          \n";
        cout << "========================================================================\n";
        cout << "--- Donor Management ---\n";
        cout << "1. Add a Donor\n";
        cout << "2. View All Donors\n";
        cout << "3. Search for a Donor\n";
        cout << "4. Delete a Donor\n";
        
        cout << "\n--- Recipient Management ---\n";
        cout << "5. Register a Recipient\n";
        cout << "6. Request Blood\n";
        
        cout << "\n--- Blood Stock ---\n";
        cout << "7. Add Blood Stock\n";
        cout << "8. View Available Stock\n";
        
        cout << "\n9. Exit\n";
        cout << "------------------------------------------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;
    
     switch(choice) {
        case 1: {
            int numDonors;
            cout << "How many donors do you want to register? ";
            cin >> numDonors; 
            for( int i = 0 ; i < numDonors ; i++ ) { 
                Donor donor; 
                donor.addDonor(); 
                donorList.push_back(donor); 
                
            }
            break;
        }
        case 2: {
            for(int i = 0 ; i < donorList.size() ; i++ ) { 
                cout << "========================================================================\n";
                cout << "                  DONOR DETAILS                                         \n";
                cout << "========================================================================\n";
                donorList[i].displayDonor(); 
            }
            break;
        }
        case 3: {
            bool found = false ; 
           string searchBloodGroup; 
              cout << "Enter the blood group to search for: ";
                cin >> searchBloodGroup;
                for( int i = 0 ; i< donorList.size() ; i++) {
                    if (donorList[i].getBloodGroup() == searchBloodGroup) {
                        found = true ; 
                        cout << "THE MATCH IS FOUND :\n" ; 
                        cout<< "NAME OF THE DONORS WITH BLOOD GROUP :"<< searchBloodGroup << endl << " IS : " << donorList[i].getDonorName() << endl ;
                    }
                }
                if (!found) {
                    cout << "No donor found with the specified blood group.\n";
                }
            break;
        }
        case 4: {
        int targetId; 
        cout << "Enter the ID of the donor to delete: ";
        cin >> targetId; 
        for (int i = 0; i < donorList.size(); i++) {
            if (donorList[i].getId() == targetId) {
                donorList.erase(donorList.begin() + i);
                cout << "Donor deleted successfully!\n";
                break;
            } }
        }
        case 5: {
            // Implement recipient registration here
            break;
        }
        case 6: {
            // Implement blood request functionality here
            break;
        }
        case 7: {
            // Implement add blood stock functionality here
            break;
        }
        case 8: {
            break;
        }
        case 9:
            cout << "Exiting the program. Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
  
        } 
 
} 

return 0;
} 