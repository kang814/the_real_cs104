#include "flexCharManager.h"

flexCharManager::flexCharManager(){
    for (int x =0; x< BUF_SIZE; x++)
        {
                buffer[x] = '\0';

        }

    //set value for active_requests
    active_requests = 0;
    used_mem_size =0;

    //create dynamic allocation for used_memory
   
    
 
}

flexCharManager::~flexCharManager(){
    delete [] used_memory;
}

    

    char* flexCharManager::alloc_chars(int n){

        //intialize memory block
        // put all the information in used_memory
        //  if(active_requests>2)
        //  {
        //     used_memory = new Mem_Block*[active_requests];
        //  }
        //  else
            used_memory = new Mem_Block*[2];

        if(active_requests>used_mem_size)
        {
            used_mem_size = active_requests;
        }
    



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
                            //fix it in here
                            Mem_Block memory;
                            memory.size = n;
                            //last physical location
                            memory.physical_location = &buffer[x+n];
                            used_memory[used_mem_size]=&memory;

                            active_requests++;


                            
                            return &buffer[x];
                        }
                };
        x++;
        }
   
        return NULL;
}

void flexCharManager::free_chars(char* p){

    //free memory in pointer p
        // int erase_length=0;
        // for (int x=0; x<active_requests; x++)
        // {
        //     if((used_memory[used_mem_size])->physical_location==p)
        //     {
        //         erase_length=(used_memory[used_mem_size])->size;
        //     }
            
        // }
       
        do
        {
            *p = '\0';
            p++;
        }
        while(p++ == (used_memory[used_mem_size])->physical_location);
        // for (int x=0; x<erase_length; x++)
        // {
            

        // }


        // while (*(p+1) != '\0')
        // {
        //         p = p+1;
        //         *p = '\0';

        // }
}         


