#include <iostream>
#include <stdlib.h>
#include "flexCharManager.h"


int main(int argc, char *argv[])
{
  flexCharManager simplest_mem_manager;

/*replace with driver code as specificed in the assignment*/
  // std::cout << "Hello world!\n";
  
  char* c1 = simplest_mem_manager.alloc_chars(11);
  
  c1[0] = 'h';
  c1[1] = 'e';
  c1[2] = 'l';
  c1[3] = 'l';
  c1[4] = 'o';
  c1[5] = ' ';
  c1[6] = 'w';
  c1[7] = 'o';
  c1[8] = 'r';
  c1[9] = 'l';
  c1[10] = 'd';
  c1[11] = '\n';


  // cout <<"c1: "<< *c1 <<endl;

  //print the phrasse
  for (int x=0; x < 11; x++)
  {
    std::cout<< c1[x];
  }

  //release the memory
  simplest_mem_manager.free_chars(&c1[6]);
  // cout<<endl;
  // cout << "new c1: "<< c1[7]<<endl;

  //obtain memory
  char* c2 = simplest_mem_manager.alloc_chars(11); //problem here
  
  c2[0] = 'm';
  c2[1] = 'o';
  c2[2] = 'o';
  c2[3] = 'n';
  c2[4] = '!';
  c2[5] = ' ';
  c2[6] = 'B';
  c2[7] = 'y';
  c2[8] = 'e';
  c2[9] = '.';
  c2[10] = '\n';


  

  return 0;
}

