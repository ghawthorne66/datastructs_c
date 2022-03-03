//Create a struct with int properties of a car. Put struct in a variable called audi.
//Create a pointer called ptr that points to this struct. Print the same property using:
//a) (*ptr).propertyName
//b) ptr->propertyName
//c) audi.propertyName


#include<stdio.h>
#include<string.h>

typedef struct {
    int year;
    int price;
} car;


int main (void)
{
   car audi;
  
    audi.year = 2022;
    audi.price = 40000;

    // printf("%i\n", audi.year);
    // printf("%i\n", audi.price);
    
   car *ptr = &audi;
   
//   printf("*ptr.property: %i\n%i\n", (*ptr).year, (*ptr).price );
//   printf("audi.property: %i\n%i\n", audi.year, audi.price );
   
   printf("%i\n", ptr->price);
 
}



