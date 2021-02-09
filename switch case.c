int main()
{
    printf("pick an item:\npizza.\nburger.\npasta.\nfrench fries.\nsandwich.");
    int choice=0;
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("You select the item pizza and its price is 239 rupees");
        break;
        case 2:
        printf("You select the item burger and its price is 129 rupees");
        break;
        case 3:
        printf("You select the item pasta and its price is 179 rupees");
        break;
        default:
        printf("Invalid choice");
    }
    
}
