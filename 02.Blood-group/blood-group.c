#include<stdio.h>
int main(){
    char blood_group, RhD;

    // getting input
    printf("Enter your Blood Group : "); 
    scanf("%c", &blood_group); // blood group
    printf("Enter your Blood RhD : "); 
    scanf(" %c", &RhD); // blood RhD

    // specify condition
    int condition_A = (blood_group == 'A') || (blood_group == 'a'); //for capital and small A/a
    int condition_B = (blood_group == 'B') || (blood_group == 'b'); //for capital and small B/b
    int condition_O = (blood_group == 'O') || (blood_group == 'o'); //for capital and small O/o
    
    // condition checking
    if((condition_A || condition_B || condition_O) && RhD == '+') // condition for positive RhD
    {
        printf("Your blood group is %c positive (%c%c)", blood_group, blood_group, RhD);
    }
    else if((condition_A || condition_B || condition_O) && RhD == '-') // condition for negative RhD
    {
        printf("Your blood group is %c negative (%c%c)", blood_group, blood_group, RhD);
    }
    else{
        printf("\nSorry!! wrong input");
    }   

    return 0;
}