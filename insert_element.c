
#include<stdio.h>
#include<string.h>

int main(){
int m,n,i=0,pos,ele;
printf("Enter the length of Array:");
scanf("%d",&m);
int num[m+1];
n=m+1;
printf("Enter the Array element:");
while(i<n-1){
    scanf("%d",&num[i]);
    i++;
}
printf("Enter the position to insert:");
scanf("%d",&pos);
printf("Enter the element to be insert:");
scanf("%d",&ele);


for(int i=n-1;i>n-pos;i--)
    {
    //int temp=str[i];
    num[i]=num[i-1];
    //str[j]=temp;
    }
num[pos]=ele;

for(int i=0;i<n;i++)
{
        printf("%d\t",num[i]);

}



return 0;
}




