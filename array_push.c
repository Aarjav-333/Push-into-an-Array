#include <stdio.h>
int main()
{
    int i,n,posi,value;
    printf("Enter the size of the array\n");
    scanf("%d",&n); //5
    int arr[n];
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the position where you want to insert the new element\n");
    scanf("%d",&posi);
    printf("Enter the value to insert\n");
    scanf("%d", &value);
    for(i = n - 1; i >= posi - 1;i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[posi - 1] = value;
    
    printf("Resultant array\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;

}
