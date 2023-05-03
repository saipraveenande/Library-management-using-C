#include <stdio.h>

int main() {
    printf("------------Main Menu----------\n\n");
    printf("1. Add Books\n");
    printf("2. Search Books(Book Status)\n");
    printf("3. Exit\n\n");
    
    int a1;
    printf("Enter: ");
    scanf("%d", &a1);
    printf("\n\n");
    
    if(a1==1)
    {
        printf("You can add book information\n\n");
        printf("choose the category :   \n\n");
        printf("1. Computer\n");
        printf("2. Electronics\n");
        printf("3. Mechanical\n\n");
        
        int a2;
        printf("Choose a category :");
        scanf("%d", &a2);
        printf("\n\n");
        if (a2 == 1){
            printf("You have choosed Computer category\n\n");
            printf("1. Introduction to c\n");
            printf("2. Introduction to Python\n");
            printf("3. Introduction to DBMS\n");
            int a3;
            printf("Choose a book : ");
            scanf("%d", &a3);
            printf("\n\n");
            if (a3 == 1)
            {
                printf("You have chooosed Introduction to C book\n\n");
                
                char book_name_a[50];
                char author_name_a[50];
                int pages_a;
                int price_a;
                printf("Book name : ");
                scanf("%s", book_name_a);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_a);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_a);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_a);
                printf("\n\n");
            }
            else if(a3==2)
            {
                printf("You have choosed Introduction to Python book\n\n");
                
                char book_name_b[50];
                char author_name_b[50];
                int pages_b;
                int price_b;
                printf("Book name : ");
                scanf("%s", book_name_b);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_b);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_b);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_b);
                printf("\n\n");
            }
            else if(a3==3)
            {
                printf("You have choosed DBMS book\n\n");
                
                char book_name_c[50];
                char author_name_c[50];
                int pages_c;
                int price_c;
                printf("Book name : ");
                scanf("%s", book_name_c);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s",author_name_c);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_c);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_c);
                printf("\n\n");
            }
        }
        else if(a2==2){
            printf("You have choosed Electonics category\n\n");
            printf("1. Basic Electronic Devices\n");
            printf("2. Digital Signal Design\n");
            printf("3. Digital Electronics\n");
            int a4;
            printf("Choose a book : ");
            scanf("%d", &a4);
            printf("\n\n");
            if (a4 == 1)
            {
                printf("You have chooosed Basic Electronic Devices book\n\n");
                
                char book_name_d[50];
                char author_name_d[50];
                int pages_d;
                int price_d;
                printf("Book name : ");
                scanf("%s", book_name_d);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_d);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_d);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_d);
                printf("\n\n");
            }
            else if(a4==2)
            {
                printf("You have choosed Digital Signal Design book\n\n");
                
                char book_name_e[50];
                char author_name_e[50];
                int pages_e;
                int price_e;
                
                printf("Book name : ");
                scanf("%s", book_name_e);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_e);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_e);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_e);
                printf("\n\n");
            }
            else if(a4==3)
            {
                printf("You have choosed Digital Electronics book\n\n");
                
                char book_name_f[50];
                char author_name_f[50];
                int pages_f;
                int price_f;
                printf("Book name : ");
                scanf("%s", book_name_f);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_f);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_f);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_f);
                printf("\n\n");
            }
        }
        else if(a2==3){
            printf("You have choosed Mechanical category\n\n");
            printf("1. Introduction to Autocad\n");
            printf("2. Fundation of Thermodynamics\n");
            printf("3. Mechanical Engineering : Conventional an Objective Type\n");
            int a5;
            printf("Choose a book : ");
            scanf("%d", &a5);
            printf("\n\n");
            if (a5 == 1)
            {
                printf("You have chooosed Introduction to Autocad book\n\n");
                
                char book_name_g[50];
                char author_name_g[50];
                int pages_g;
                int price_g;
                printf("Book name : ");
                scanf("%s", book_name_g);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_g);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_g);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_g);
                printf("\n\n");
            }
            else if(a5==2)
            {
                printf("You have choosed Fundation of Thermodynamics book\n\n");
                
                char book_name_h[50];
                char author_name_h[50];
                int pages_h;
                int price_h;
                
                printf("Book name : ");
                scanf("%s", book_name_h);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_h);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_h);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_h);
                printf("\n\n");
            }
            else if(a5==3)
            {
                printf("You have choosed Mechanical Engineering : Conventional an Objective Type book\n\n");
                
                char book_name_i[50];
                char author_name_i[50];
                int pages_i;
                int price_i;
                printf("Book name : ");
                scanf("%s", book_name_i);
                printf("\n\n");
                
                printf("Author name : ");
                scanf("%s", author_name_i);
                printf("\n\n");
                
                printf("Pages : ");
                scanf("%d", &pages_i);
                printf("\n\n");
                
                printf("Price : ");
                scanf("%d", &price_i);
                printf("\n\n");
            }
        }
    }
    else if (a1 == 2)
    {
        printf("You can search the book (Book Status)\n\n");
        
        printf("Press the code:123 for Introduction to c\n");
        printf("Press the code:456 for Introduction to Python\n");
        printf("Press the code:789 for Introduction to DBMS\n");
        printf("Press the code:147 for Basic Electronic Devices\n");
        printf("Press the code:258 for Digital Signal Design\n");
        printf("Press the code:369 for Digital Electronics\n");
        printf("Press the code:321 for Introduction to Autocad\n");
        printf("Press the code:654 for Fundation of Thermodynamics\n");
        printf("Press the code:987 for Mechanical Engineering : Conventional an Objective Type\n");
        
        int a6;
        printf("Enter the book to search (USE THE CODE ) : ");
        scanf("%d", &a6);
        printf("\n");
        
        switch(a6)
        {
            case 123:
            printf("Book Name : Introduction to C\n\n");
            printf("Book Status : 21 copies left");
            break;
            
            case 456:
            printf("Book Name : Introduction to Python\n\n");
            printf("Book Status : 14 copies left");
            break;
            
            case 789:
            printf("Book Name : Introduction to DBMS\n\n");
            printf("Book Status : 26 copies left");
            break;
            
            case 147:
            printf("Book Name : Basic Electronic Devices\n\n");
            printf("Book Status : 18 copies left");
            break;
            
            case 258:
            printf("Book Name : Digital Signal Design\n\n");
            printf("Book Status : Out of stock");
            break;
            
            case 369:
            printf("Book Name : Digital Electronics\n\n");
            printf("Book Status : 2 copies left");
            break;
            
            case 321:
            printf("Book Name : Introduction to Autocad\n\n");
            printf("Book Status : Out of stock");
            break;
            
            case 654:
            printf("Book Name : Fundation of Thermodynamics\n\n");
            printf("Book Status : 6 copies left");
            break;
            
            case 987:
            printf("Book Name : Mechanical Engineering : Conventional an Objective Type\n\n");
            printf("Book Status : 17 copies left");
            break;
        }
    }
    else if (a1 == 3)
    {
        printf("The Library is closed\n\n");
        printf("Visit Again");
    }
}

