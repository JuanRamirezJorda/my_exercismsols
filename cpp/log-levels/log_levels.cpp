#include <string>

namespace log_line {
	std::string message(std::string cadena){
        if (cadena.find(" ")){
        		cadena = cadena.substr(cadena.find(" ")+1);
        	}
        	std::string output {""}; 
        for (size_t i = 0; i < cadena.length(); i++)
        {
            output += cadena[i];
        }

        return output;      
	}
    std::string log_level(std::string cadena){
    	if (cadena.find("ERROR"))
        {	
            cadena = cadena.substr(cadena.find("[")+1,cadena.find("]")-cadena.find("[")-1);
        }
    	std::string output {""}; 
    	for (size_t i = 0; i < cadena.length(); i++)
    	{
            output += cadena[i];
        }
     	return output;          
    }
    std::string reformat(std::string cadena){
		return message(cadena) + " (" + log_level(cadena) + ")"; 
        
    }    
} 