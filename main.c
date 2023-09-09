#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main()
{
    int enable ;
    printf("Enter 0 for stack and 1 for queue\n") ;
    scanf ("%d" , &enable) ;

    int x ;
    if (enable == 0){
    while (1){

        printf("\nEnter 1 for create , 2 for display , 3 for insert , 4 for delete and 5 to return back :\n ") ;
        scanf("%d" , &x) ;
        printf("\n") ;
        if (x == 5)
            break ;

        switch (x)
        {
        case 1:
            create();
            break ;

        case 2:
            display();
            break ;

        case 3:
            Insert_End() ;
            break ;

        case 4:
            delete_end() ;
            break ;

        default:
            printf("invalid choice !") ;
            break ;
        }
    }
    }

    else if (enable == 1){

        while (1){

        printf("\nEnter 1 for create , 2 for display , 3 for insert , 4 for delete and 5 to return back :\n ") ;
        scanf("%d" , &x) ;
        printf("\n") ;
        if (x == 5)
            break ;

        switch (x)
        {
        case 1:
            create();
            break ;

        case 2:
            display();
            break ;

        case 3:
            Insert_End() ;
            break ;

        case 4:
            delete_begin() ;
            break ;

        default:
            printf("invalid choice !") ;
            break ;
        }
    }

    }

    else
        printf("Please enter a valid choice !") ;
    return 0;
}
