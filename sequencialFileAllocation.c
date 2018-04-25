#include<stdio.h>
void main()
{
    int block[50],i,st,len,j,k,choice,x;

    //Empty Blocks are having 1 as flag
    for(i=0;i<50;i++)
    {
        block[i] = 1;
    }
    x:
    printf("\nEnter the starting position: ");
    scanf("%d",&st);
    printf("\nEnter the length of the File: ");
    scanf("%d",&len);

    for(j=st;j<st+len;j++)
    {
        if(block[j]==0)
        {
            break;
        }
    }


    if(j==st+len)
    {
        for(k=st;k<st+len;k++)
        {
            block[k]=0; //file is getting allocated
        }
        printf("\n File is allocated from %d to %d blocks.",st,st+len-1);
    }
    else
    {
        printf("------File can not be allocated-------");
    }

    printf("\n If you want to Allocated another file, then press 1 or press 0 to exit.");
    scanf("%d",&choice);

    if(choice == 1)
    {
        goto x;
    }




    

}