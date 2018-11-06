#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Distance{
    int feet;
    double inches;
} Distance;
//convert to inches then take the floor for ft and mod for inches
Distance add (Distance first, Distance second){
    Distance result;
    int tempInches = first.inches + second.inches;
    int firstFTtoIN = first.feet * 12;
    int secondFTtoIN = second.feet *12;
    tempInches += firstFTtoIN + secondFTtoIN;
    result.feet = floor(tempInches/12);
    result.inches = tempInches % 12;
    return result;
}
int main() {
    Distance first;
    printf("Please enter feet: \n");
    scanf("%d", &first.feet);
    printf("Please enter inches: \n");
    scanf("%f", &first.inches);

    Distance second;
    printf("Please enter feet: \n");
    scanf("%d", &second.feet);
    printf("Please enter inches: ");
    scanf("%f", &second.inches);

    Distance result = add(first,second);
    printf(" The result is %d '', %f '", result.feet, result.inches);

    return 0;
}