// Program to store book information using structure. (book id, book title, price) 

#include <stdio.h>

int main()
{
    struct book
    {
        char book_id;
        int book_title;
        float price;
    };
    struct book b1, b2, b3;

    printf("\nEnter book_id, book_title & price\n");
    scanf("%c %f %d", &b1.book_id, &b1.book_title, &b1.price);
    scanf("%c %f %d", &b2.book_id, &b2.book_title, &b2.price);
    scanf("%c %f %d", &b3.book_id, &b3.book_title, &b3.price);

    printf("\n\nAnd this is what you entered");
    printf("\n%c %f %d", b1.book_id, b1.book_title, b1.price);
    printf("\n%c %f %d", b2.book_id, b2.book_title, b2.price);
    printf("\n%c %f %d", b3.book_id, b3.book_title, b3.price);
    
    return 0;
}
