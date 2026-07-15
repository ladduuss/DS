#include<stdio.h>
int main(){
    int n,i,x,count=0,firstposition=-1,arr[100];
    printf("enter the number of elements(max100)");
    scanf("%d",&n);
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter number to find:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count++;
        }
        if(firstposition==-1)
        {
            firstposition=i;
        }
        
    }
    printf("the number of occurences of %d:%d \n",x,count);
    if(firstposition!=-1)
    {
        printf("first occurence is at index: %d \n",firstposition);

    }
    else
    {
        printf("%d not found in the array \n",x);
    
    }
    
return 0;
}
