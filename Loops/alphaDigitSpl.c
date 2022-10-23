// Count and display no of alphabets, digits and special characters
#include<stdio.h>
int main(){
    int n,actr=0,dctr=0,spctr=0,i;
    char ch;
    printf("Enter no of Characters\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter Character\n");
        scanf(" %c",&ch);
        if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
            actr++;
        }
    else if(ch>='0' && ch<='9'){
            dctr++;
        }
    else
        {
            spctr++;
        }
    }
    printf("Alphabet count: %d\n",actr);
    printf("Digits count: %d\n",dctr);
    printf("Special character: %d\n",spctr);
}
