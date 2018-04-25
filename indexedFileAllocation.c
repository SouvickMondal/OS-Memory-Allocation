#include<stdio.h>

void main()
{
    int block[50],i,len,n,j,temp,k,c,m,p,x,choice,l,ind;
    int arr[50],y;

    for(j=0;j<50;j++)
    {
        block[j]=1;
    }

    printf("Enter how many blocks are occupied: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the occupied location: ");
        scanf("%d",&temp);

        block[temp] = 0;
    }
    
    x:

    printf("\nEnter location of the Indexed Block: ");
    scanf("%d",&ind);
    if(block[ind]==0)
    {
        printf("\n***** This block is occupied. Please Enter another location *********");
        goto x;
    }
    else
    {
        block[ind]=0;
        
    printf("\nEnter the length of the file: ");
    scanf("%d",&len);

    k=0;
    c=0;
    while(c<len && k<50)
    {
        if(block[k]==1)
        {
            c++;

        }
        k++;
    }
    if(c==len)
    {
      //  printf("\nFile is Allocated Successfully in the bellow linked blocks: \n");

    m=0;
    p=0;
    y=0;
    while(p<len && m<50)
    {
        if(block[m]==1)
        {
            arr[y]=m;
         //   printf("%d --->",m);
            block[m]=0;
            y++;
            p++;

        }
        m++;
    }
       printf("\nFile is Allocated Successfully in the bellow linked blocks: ");
       printf("\n Index Block is : Block %d\n",ind);

        for(l=0;l<y;l++)
        {
            printf("%d --->",arr[l]);
        }
        

    }
    else
    {
        printf("\n-----File can not be allocated----");
        block[ind]=1;
    }
    
    printf("\n If you want to Allocated another file, then press 1 or press 0 to exit: ");
    scanf("%d",&choice);

    if(choice == 1)
    {
        goto x;
    }

    }

}