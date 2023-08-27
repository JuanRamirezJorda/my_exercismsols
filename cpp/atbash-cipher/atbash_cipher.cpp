#include "atbash_cipher.h"
#include <string>
#include <iostream>
#include <cctype>

namespace atbash_cipher {
    const std::string PLAIN {"abcdefghijklmnopqrstuvwxyz"};
    const std::string CIPHER{"zyxwvutsrqponmlkjihgfedcba"};
    
    std::string encode(std::string chain){
        std::string plain {"abcdefghijklmnopqrstuvwxyz"};
        std::string cipher{"zyxwvutsrqponmlkjihgfedcba"};
        //std::string prueba {"TESTING,1 2 3, testing."};
        std::string output {""};
        size_t counter {0};
    
        for (char j:chain){
            if(counter==5 && isalnum(j)){
                output+= " ";
                counter=0;
            }
            if(isalpha(j)){
                //std::cout << "Alpha " << j << std::endl;
                char lowercase = std::tolower(j);
                size_t index = PLAIN.find(lowercase);
                if (index != std::string::npos) {
                    output += CIPHER[index];
                    counter++;
                }
            }
            
            if(isdigit(j)){
                //std::cout << "Numero " << j << std::endl;
                output += j;
                counter++;                
            }

        }
        
        return output;
    }

    std::string decode(std::string chain){
        
        std::string cadena_no_spc {""}, output {""};
        for (char c : chain) {
            if (!std::isspace(c)) {
                cadena_no_spc += c;
            }
        }
        for (char j:cadena_no_spc){
            if(isalpha(j)){
                //std::cout << "Alpha " << j << std::endl;
                size_t index = CIPHER.find(j);
                if (index != std::string::npos) {
                    output += PLAIN[index];
                }
            }
            
            if(isdigit(j)){
                //std::cout << "Numero " << j << std::endl;
                output += j;
            }
        }
        return output;
    }
    
}  // namespace atbash_cipher





#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
namespace atbash_cipher {
    std::string encode(std::string chain);
    std::string decode(std::string chain);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H