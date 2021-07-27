#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    a = 85;
    b = -20;

    /* Arithmetische Operatoren */

    /* Weise c das Ergebnis der Addition von a und b zu. */
    c = a + b;
    printf("%d + %d = %d\n", a, b, c);

    putchar('\n');

    /* Weise c das Ergebnis der Subtraktion von a und b zu. */
    a = 100;
    b = 250;
    c = a - b;
    printf ("%d - %d = %d\n", a, b, c);

    putchar('\n');
    /* Weise c das Ergebnis der Multiplikation von a und b zu. */
    a = 55;
    b = 65;
    c = a * b;
    printf("%d * %d = %d\n", a, b, c);

    putchar('\n');
    /* Weise c das Ergebnis der Division von a/b zu. */
    a = 500;
    b = 90;
    c = a/b;
    printf("%d/%d= %d\n", a, b, c);

    putchar('\n');

    /* Weise c den Rest der Division von a/b zu => Modulu. */

    a = 300;
    b = 70;
    c = a%b;
    printf("%d%%%d = %d\n", a, b, c);

    /* Darstellung eines %-Zeichens mit %% */
    /*printf("\n\n%%\n\n");*/

    /* Vergebe einene neuen Wert für a */
    a = 100;
    printf("\n\n\na = %d\n", a);
    ++a;        /* Präinkrement - Operatoren*/
    printf("a nach ++a = %d\n", a);
    a++;        /* postinkrement-Operator*/
    printf("a nach a++ = %d\n", a);

    /* vergebe einen neuen Wert für B*/
    b = 202;
    printf("b = %d\n", b);
    --b;        /* Präinkrement - Operatoren*/
    printf("a nach --b = %d\n", b);
    b--;        /* postinkrement-Operator*/
    printf("a nach b-- = %d\n", b);

    printf("\n\na und b vor a = ++b': a = %d, b = %d\n", a, b);
    a = ++b; /*Präinkrement mit zuweisung*/
    printf("a und b nach 'a = ++b': a = %d, b = %d\n", a, b);

    a = b++; /*Postinkrement mit zuweisung*/
    printf("a und b nach 'a = b++': a = %d, b = %d\n", a, b);

    a =10, b = 35;
    a = --b;
    printf("a und b nach 'a = --b': a = %d, b = %d\n", a, b);

    a = b--; /* postdekrement mit zuweisung*/
    printf("a und b nach 'a = b--': a = %d, b = %d\n", a, b);

    a = 100;
    b = 95;
    c= --a - b++;
    printf("%d = --%d -%d++\n", c, a, b);

    putchar('\n');
    /* Kurzhandschreibweise für Zuweisung*/
    printf("Kurzhandweisung\n");
    a = 100;
    printf("a vor a += 10 ist %d\n", a);
    a += 10;
    printf("a nach a += 10 ist &%d\n", a);

    a -= 50;
    printf(" a nach a -= 50 ist %d\n", a);

    a *= 3;
    printf("a mal a *= 3 ist %d\n", a);

    a /= 10;
    printf("a mal a /= 10 ist %d\n", a);

    b = 5;
    c = 65;
    a *= b + c;
    printf("a nach a *= b + c ist %d\n", a);

    return 0;
}
