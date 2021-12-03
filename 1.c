#include<stdio.h>
#include<conio.h>
int INFO[20];
int LINK[20];
int FRONT,REAR,AVAIL;
void INSERT (int);
int DELETE (void);
void DISPLAY(void);
void main()
{
    int choice,ITEM;

    LINK[0]=3;LINK[1]=17;LINK[2]=13;LINK[3]=2;LINK[4]=12;LINK[5]=8;LINK[6]=11;LINK[7]=14;LINK[8]=9;
    LINK[9]=18;LINK[10]=6;LINK[11]=16;LINK[12]=10;LINK[13]=5;LINK[14]=-1;LINK[15]=1;LINK[17]=19;LINK[18]=7;LINK[19]=4;
    FRONT =-1;
    REAR=-1;
    AVAIL=15;
    while(1)
    {
        printf("\n\nChoose an option:\n");
        printf("\n\n1. Insert");
        printf("\n\n2.Delete");
        printf("\n\n3.Display");
        printf("\n\n4.Exit \n\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            {
                printf("\n\nEnter the item to be inserted in to the queue:");
                scanf("%d",&ITEM);
                INSERT(ITEM);
                break;
            }
        case 2:
            {
                ITEM =DELETE ();
                if (ITEM=-9999);
                else
                    printf("\n\nItem %d delected from the queue:",ITEM);
                break;
            }
        case 3:
            {
                DISPLAY();
                break;
            }
        case 4:
            {
                exit(0);
                break;
        }
        default:
            {
                printf("\nInvalid choice.");
                break;
            }
    }

}
}
void INSERT (int I)
{
    int NEW;
    if(AVAIL==-1)
    {
        printf("\nOverflow");
        return ;
    }
    NEW=AVAIL;
    AVAIL=LINK [AVAIL];
    INFO[NEW]=I;
    LINK[NEW]=-1;
    if (FRONT== -1)
        FRONT=REAR=NEW;
    else
    {
        LINK [REAR]=NEW;
        REAR=NEW;
    }
}
int DELETE(void)
{
    int TEMP,I;
    if (FRONT==-1)
    {
        printf("\nUnderflow");
        return(-9999);
    }
    TEMP=FRONT;
    I=INFO[TEMP];
    FRONT=LINK[TEMP];

    LINK [TEMP]=AVAIL;
    AVAIL=TEMP;
    return(I);
}
void DISPLAY(void)
{
    int TEMP=FRONT;
    if (TEMP==-1)
    {
        printf("\nQueue is empty");
        return;
    }
    while (TEMP!=-1)
    {
        printf("\n%d",INFO[TEMP]);
        TEMP=LINK[TEMP];
    }
    return;
}
