
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