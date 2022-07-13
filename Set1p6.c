6)
#include<stdio.h>
#include<string.h>
int main(){
    // Write a menu driven program to accept a number in any Number System [from Binary, Decimal, Octal, and Hex] and convert and display the same in any other amongst these

    printf("1 : Decimal \t2 : Binary \n3 : Octal \t4 : Hexadecimal\n");
    printf("Enter the type of number you want to enter : ");
    int t1;
    scanf("%d",&t1);
    printf("\nEnter the no. you want to convert : ");
    int input,dec=0,digit,mult=1;
    char hex_input[30];

    switch(t1){                  //taking every input in decimal number system
        case 1:                     // dec -> dec
            scanf("%d",&input);
            dec=input;
            break;
        case 2:                     // bin -> dec
            scanf("%d",&input);
            while(input!=0){
                digit = input%10;
                input/=10;
                dec+=(digit*mult);
                mult*=2;
            }
            break;
        case 3:                     // oct -> dec
            scanf("%d",&input);
            while(input!=0){
                digit = input%10;
                input/=10;
                dec += (digit*mult);
                mult*=8;
            }
            break;
        case 4:
            scanf("%s",hex_input);  // hex -> dec
            int length=strlen(hex_input)-1;
            for (int i=length; i >=0; i--)
            {
                if (hex_input[i]>='0' && hex_input[i]<='9')
                {
                    dec += (hex_input[i]-48)*mult;
                    mult*=16;
                }
                else if(hex_input[i]>='A' && hex_input[i]<='F'){
                    dec += (hex_input[i]-55)*mult;
                    mult*=16;
                }
                else if(hex_input[i]>='a' && hex_input[i]<='f'){
                    dec += (hex_input[i]-87)*mult;
                    mult*=16;
                }
                else{
                    printf("Wrong Input !!\n");
                }
            }
            break;
        default :
            printf("Wrong Input !!\n");
            break;
        }    
    printf("\n1 : Decimal \t2 : Binary \n3 : Octal \t4 : Hexadecimal\n");
    printf("Enter the type of number system in which you want to convert your no. : ");
    int t2;
    scanf("%d",&t2);
    int rem,result=0,pos=1,i;
    char hex_output[20];
    
    switch (t2)
    {
        case 1:                 // dec -> dec
            result=dec;
            printf("%d\n",result);
            break;
        case 2:                 // dec -> bin
            printf("DEC VALUE IS :%d\n",dec);
            while(dec!=0){
                rem =dec%2;
                result += rem*pos;
                dec/=2;
                pos*=10;
            }
            printf("%d\n",result);
            break;
        case 3:                 //  dec -> oct
            while (dec !=0)
            {
                rem=dec%8;
                dec/=8;
                result+=rem*pos;
                pos*=10;
            }
            printf("%d\n",result);
            break;
        case 4:                 // dec -> hex   
            while (dec!=0)
            {
                int temp=0;
                temp = dec%16;
                if (temp<10)
                {
                    hex_output[i]=(char)(temp+48);
                    i++;
                }
                else{
                    hex_output[i]=(char)(temp+55);
                    i++;
                }
                dec/=16;
            }
            int length2=strlen(hex_output)-1;
            for (int j =length2 ; j >= 0; j--)
            {
                printf("%c",hex_output[j]);
            }
            break;
        default:
            printf("Wrong Input !\n");
            break;
    }
    return 0;
}
