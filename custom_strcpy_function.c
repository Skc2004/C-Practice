#include <stdio.h>
#include <string.h>

char *str_cpy1(char *destination, const char *source);

int main()
{
  // create a test source string and test destination char array
  char src[] = "copy this";
  char dest[100];
  
  // test the 2nd version of our str_cpy function, we could replace 2 with 1 
  // in the below statement to test the 1st version
  char *dest_ptr = str_cpy2(dest, src);
  
  // check that the dest char array contains the string in src, dest_ptr should
  // also be a pointer to this same dest char array and should therefore 
  // output the same string and have the same memory address as dest
  printf("     src: %s\n", src);
  printf("    dest: %s\n", dest);
  printf("dest_ptr: %s\n", dest_ptr);
  printf("    dest: %p\n", dest);
  printf("dest_ptr: %p\n", dest);
  
  return 0;
}

// Copy the string contained in source to destination, and return a pointer to 
// destination.  In this version of the function we use a loop and counter 
// variable to help copy each character.
char *str_cpy1(char *destination, const char *source)
{
  // if destination is NULL we can't copy to the address, likely something has 
  // gone wrong perhaps in allocating space for destination, so we just retunr
  // NULL in this case
  if (destination == NULL) return NULL;
  
  // use counter variable i to keep track of our index into the destination
  // and source character arrays, start at first index
  int i = 0;

  // copy characters until we encounter the null terminator in the source string
  // which signifies the end of the string
  while (source[i] != '\0')
  {
    // copy the character at index i from the source string to index i in the 
    // destination character array
    destination[i] = source[i];

    // increment i so that the next iteration of the loop looks at and 
    // potentially copies the next character in the source
    i++;
  }
}
