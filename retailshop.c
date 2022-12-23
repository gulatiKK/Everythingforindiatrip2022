// chocolate
// notebook
// eraser
// pen 
// scale

// how much stock is left?
// how much quantity of which item I need to order?
// how much profit did I make?

// add new stock
// make a sale
int totalcost=0,sellsprice=0,buyprice=0;
int stock=0,tot_qty_sold=0;
int reorderlevel=35;
void intialize()
{
    printf("What is the Cost Price? ");
    scanf ("%d", &buyprice);
    printf("What is the Selling Price? ");
    scanf ("%d", &sellsprice);
}
void calculateprofit()
{
    printf("The total profit is $");
    printf("%d\n", (sellsprice-buyprice)*tot_qty_sold); 
}
void stockleft()
{
    printf("how much stock is left? \n");
    printf("There are %d units avalible as off now \n",stock);
}

void checkifrefillrequired()
{
    if (stock<=reorderlevel)
    {
        printf ("order more stock now,it has fallen bellow threshhold of %d\n",reorderlevel);
    }
}
void deductquantity()
{
    int sell_qty=0;
    printf("make a sale \n");
    printf("we have %d items in stock, how much do you want to sell: ", stock);
    scanf ("%d" , &sell_qty);
    if (sell_qty<=stock)
    {
     stock=stock-sell_qty;
    tot_qty_sold=tot_qty_sold+sell_qty;
    checkifrefillrequired();
    }
    else
    {
        printf("sorry, you need to order less quantity\n");
    }
    
    
}
void buildonquantity()
{
    int add_qty=0;
    printf ("We have %d items in stock, how much do you want to add: ",stock);
    scanf ("%d" , &add_qty);
    stock=stock+add_qty;
}

void printChoices()
{
    printf ("You have the following choices: \n");
    printf ("\t to know how much stock is left select 1 \n");
    printf ("\t to know how much profit did I make select 2 \n");
    printf ("\t to make a sale select 3 \n");
    printf ("\t to add stock select 4 \n");
    printf ("\t select 5 to exit the shop \n");
    printf ("What do you want do do? ");
}
int main()
{
    int choice;
    printf ("Welcome to Krishna's Shop!\n");
     intialize();
    do
    {
          
            printChoices();
            scanf ("%d", &choice);
            switch (choice)
            {
                case 1:
                    stockleft();
                    break;
                case 2:
                    calculateprofit();
                    break;
                case 3:
                    deductquantity();
                    break;
                case 4:
                    buildonquantity();
                    break;
            }
            
    }
    while (choice!=5);
    printf ("Goodbye!");
    return 0;
    }