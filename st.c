#include <stdio.h>
#include <string.h>
struct cla
{
    char class_no[4];
    char avaliability[10];
    char projector[5];
} c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12;
void initilize() //database
{
    strcpy(c1.avaliability, "IICSEA");
    strcpy(c2.avaliability, "IICSEB");
    strcpy(c3.avaliability, "IICSEC");
    strcpy(c4.avaliability, "IICSED");
    strcpy(c5.avaliability, "IIICSEA");
    strcpy(c6.avaliability, "IIICSEB");
    strcpy(c7.avaliability, "IIICSEC");
    strcpy(c8.avaliability, "IIICSED");
    strcpy(c9.avaliability, "NIL");
    strcpy(c10.avaliability, "NIL");
    strcpy(c11.avaliability, "NIL");
    strcpy(c12.avaliability, "NIL");

    //s.no
    strcpy(c1.class_no, "S01");
    strcpy(c2.class_no, "S02");
    strcpy(c3.class_no, "S03");
    strcpy(c4.class_no, "S04");
    strcpy(c5.class_no, "S05");
    strcpy(c6.class_no, "S06");
    strcpy(c7.class_no, "S07");
    strcpy(c8.class_no, "S08");
    strcpy(c9.class_no, "S09");
    strcpy(c10.class_no, "S10");
    strcpy(c11.class_no, "S11");
    strcpy(c12.class_no, "S12");
    //projector
    strcpy(c1.projector, "NO");
    strcpy(c2.projector, "YES");
    strcpy(c3.projector, "NO");
    strcpy(c4.projector, "NO");
    strcpy(c5.projector, "YES");
    strcpy(c6.projector, "NO");
    strcpy(c7.projector, "YES");
    strcpy(c8.projector, "NO");
    strcpy(c9.projector, "YES");
    strcpy(c10.projector, "YES");
    strcpy(c11.projector, "YES");
    strcpy(c12.projector, "YES");
}
void display() //selcect
{
    printf("\n%s - %s - %s", c1.class_no, c1.avaliability, c1.projector);
    printf("\n");
    printf("%s - %s - %s", c2.class_no, c2.avaliability, c2.projector);
    printf("\n");
    printf("%s - %s - %s", c3.class_no, c3.avaliability, c3.projector);
    printf("\n");
    printf("%s - %s - %s", c4.class_no, c4.avaliability, c4.projector);
    printf("\n");
    printf("%s - %s - %s", c5.class_no, c5.avaliability, c5.projector);
    printf("\n");
    printf("%s - %s - %s", c6.class_no, c6.avaliability, c6.projector);
    printf("\n");
    printf("%s - %s - %s", c7.class_no, c7.avaliability, c7.projector);
    printf("\n");
    printf("%s - %s - %s", c8.class_no, c8.avaliability, c8.projector);
    printf("\n");
    printf("%s - %s - %s", c9.class_no, c9.avaliability, c9.projector);
    printf("\n");
    printf("%s - %s - %s", c10.class_no, c10.avaliability, c10.projector);
    printf("\n");
    printf("%s - %s - %s", c11.class_no, c11.avaliability, c11.projector);
    printf("\n");
    printf("%s - %s - %s", c12.class_no, c12.avaliability, c12.projector);
    printf("\n");
}
void change(struct cla s1, struct cla s2)
{
    if (0 == strcmp(s1.avaliability, "NIL"))
    {
        printf("no one present");
    }
    else if (0 != strcmp(s2.avaliability, "NIL")) //dout
    {
        printf("there is someone in that class");
    }
    else
    {
        char temp[10];
        strcpy(temp, s2.avaliability);
        strcpy(s2.avaliability, s1.avaliability);
        strcpy(s1.avaliability, temp);
        printf("value changed");
        printf("%s - %s - %s", s1.class_no, s1.avaliability, s1.projector);
        printf("\n");
        printf("%s - %s - %s", s2.class_no, s2.avaliability, s2.projector);
    }
}

int main()
{
    // struct cla c1, c2, c3, c4, c5;
    initilize();
    display();
    change(c1, c6);
}