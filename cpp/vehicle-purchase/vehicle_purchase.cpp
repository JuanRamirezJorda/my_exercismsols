#include "vehicle_purchase.h"
#include <iostream>
#include <string>
#include <algorithm>

namespace vehicle_purchase {

    /* This script may be refactored and be improved*/
    
    const std::string chain {" is clearly the better choice."}; 
    const double DISC_1_TIER {0.80}; //Less than 3 years
    const double DISC_2_TIER {0.70}; //More than 3 and less than 10 y.o.
    const double DISC_3_TIER {0.50}; //More than 10 y.o.
    
    std::string lowerCase(const std::string& word) {
        std::string result = word;
        std::transform(result.begin(), result.end(), result.begin(), ::tolower);
        return result;
    }

    // needs_license determines whether a license is needed to drive a type of vehicle. Only "car" and "truck" require a license.
    bool needs_license(std::string kind){
        // TODO: Return true if you need a license for that kind of vehicle.
        if (kind== "car" || kind== "truck") return true; else return false;
    }

    // choose_vehicle recommends a vehicle for selection. It always recommends the vehicle that comes first in lexicographical order.
    std::string choose_vehicle(std::string option1, std::string option2) {
        // TODO: Return the final decision in a sentence.
        std::string chain {" is clearly the better choice."};
		std::string option1_1 = lowerCase(option1);
        std::string option2_2 = lowerCase(option2);
        long long unsigned int uno {1};
		long long unsigned int opt1_spc = option1_1.find(" ")+uno;
        long long unsigned int opt2_spc = option2_2.find(" ")+uno;
        
        //First word loop check:
        for (size_t i = 0; i<3 ;i++){
            if (option1_1[i] < option2_2[i]) {
                return option1 + chain;
            }else if (option1_1[i] > option2_2[i]){
                return option2 + chain;
            }   
        }
        //Second word loop check:
        for (size_t j=0; j<3; j++){
            if (option1_1[opt1_spc+j] < option2_2[opt2_spc+j]) {
                return option1 + chain;
            }else if (option1_1[opt1_spc+j] > option2_2[opt2_spc+j]){
                return option2 + chain;
            }                
        }
		return "";
}

    // calculate_resell_price calculates how much a vehicle can resell for at a certain age.
    double calculate_resell_price(double original_price, double age) {
        // TODO: Return the age-corrected resell price.
        return original_price * (age<3 ? vehicle_purchase::DISC_1_TIER:(age>=10? vehicle_purchase::DISC_3_TIER: vehicle_purchase::DISC_2_TIER));
    }

}  // namespace vehicle_purchase