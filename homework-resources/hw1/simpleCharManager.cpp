#include <cstddef>
#include "simpleCharManager.h"


simpleCharManager::simpleCharManager(){
        for (int x =0; x< BUF_SIZE; x++)
        {
                buffer[x] = '\0';

        }
}

simpleCharManager::~simpleCharManager(){}
             
char* simpleCharManager::alloc_chars(int n){
        
        int x = 0;
        // char* temp;
        char* check;
        bool condition = true;
        while (x<10000)
        {
                //check first NULL
                if(buffer[x]=='\0')
                {
                        //put first NULL into address
                        // temp = &buffer[x];
                        check = &buffer[x];

                        //check if there is n size
                        for (int i=0; i<n; i++)
                        {
                                if (*check != '\0')
                                {
                                        //move to next if false
                                       condition = false;
                                }

                        }
                        if (condition)
                        {
                                return &buffer[x];
                        }
                };
        x++;
        }
        return NULL;
}

void simpleCharManager::free_chars(char* p){

        //free memory in pointer p
        *p = '\0';
        while (*(p+1) != '\0')
        {
                p = p+1;
                *p = '\0';

        }

}         




