#include <stdio.h>
#include <math.h>    // Need this for sqrt()
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
// gcc -Wall -std=gnu99 -g -o test test.c
// char * my_func(char * a) {
//     return a;
// }
// gcc -Wall -std=gnu99 -g -o test test.c

int main(int argc, char **argv){

    if(strncmp(argv[1], "test1", 5)==0){
        printf("0\n");
        return 0;
    }else{
        return -1;
    }
    // char *ptpr = malloc(sizeof(char) * 1000000000000000000);
    // if (ptpr == NULL){
    //     printf("a\n");
    // }
    // int foo = 4;
    // int bar = 5;
    // int *ptr = &bar;
    // int status;
    // int result = wait(&status);
    // pid_t process = 0;
    // if(process == 0) {
    //     *ptr += foo;
    //     exit(0);
    // } else {
    //     //sleep(10);
    //     printf("%d\n", *ptr);
    // }
    return 0;
    // int x=1<<3;
    // int y = x|1;
    // printf("%d %d\n",x,y);
    //char *s="abc";
    // char *s2="abc";
    
    // //char s3[4]="abc";
    // printf("%s\n", s2);
    // s2[0] = "c";
    // printf("%s\n", s2);
    //printf("%s\n", s3);

    // char *s = "1e103d0";
    // int x = strtol(s, NULL, 10);
    // printf("%d\n", x);
    //printf("%lu\n", sizeof(s));




//     char str[80] = "This is - www.tutorialspoint.com - website";
//    const char s[2] = "-";
//    char *token;
   
//    /* get the first token */
//    token = strtok(str, s);
   
//    /* walk through other tokens */
//    while( token != NULL ) {
//       printf( " %s\n", token );
    
//       token = strtok(str, s);
//    }
    // printf("%.1lf", (float)strtol(argv[1], NULL, 10));
    // int *q =malloc(sizeof(int));
    // *q = 90;
    // double re = (double)q/r;
    // char *p = "12csf";
    // printf("%f\n", re);
    // printf("%d\n", r);
    // printf("%d\n", *q);
    // printf("%p\n",q);

    // free(q);
    // printf("%B\\n",q == 3);
    // char greeting[20];
    // char *name = argv[2];

    // Your code goes here

    // strncpy(greeting, argv[1], 18);
    // greeting[19] = '\0';
    // strncat(greeting, " ", 1);
    // greeting[19] = '\0';
    // strncat(greeting, name, sizeof(greeting) - strlen(greeting) - 1);
    // greeting[19] = '\0';


    // printf("%s\n", greeting);


    // if (argc != 3){
    //   printf("Invalid\n");
    // }
    // else if (*argv[1] == *argv[2]){
    //   printf("Same\n");
    // }

    // printf("1: %s\n", argv[1]);
    // printf("2: %c\n", *argv[1]);
    // printf("3: %c\n", argv[1][3]);

    // printf("1: %lu\n", strlen(argv[1]));


    // char a[21] = {'1','2','\0'};
    // printf("%s\n", a);
    // a [2] = 'r';
    // printf("%s\n", a);
    // a [4] = 'r';
    // printf("%s\n", a);
    // a [3] = 'r';
    // printf("%s\n", a);



    // float labels_result[3] = {0.0, 1.1, 2.2};
    // printf("%f-%f-%f\n", labels_result[0], labels_result[1], labels_result[2]);
    // labels_result[2] = 1.20;
    // printf("%f-%f-%f\n", labels_result[0], labels_result[1], labels_result[2]);


    // char a[] ="9-9.pgm\n27-4.pgm\n28-0.pgm";
    // printf("%s\n", a);

    //char *fiii = "9-9.pgm\n27-4.pgm\n28-0.pgm";

    // char *fiii = "filesname.txt";
    // FILE *f1 = fopen(fiii, "r");
    
    // char name[30];
    // int i = 0;
    // while (fscanf(f1, "%s\n", name) == 1){
    //     printf("%s\n", name);
    //     printf("%d\n", i);
    //     i++;
    // }

    // fclose(f1);




    // unsigned char dataset[3][785];
    // unsigned char *labels;
    // load_dataset(a, dataset, labels);


    
    //printf("%hhu\n", get_label(a));

    // char *img[3];
    // img[0] = "-2003";
    // img[1] = "93242349";
    // img[2] = "233333";
    // int *x = build_array(img, 3);
    // printf("A:%d, B:%d, C:%d...\n", x[0], x[1], x[2]);
    // free(x);

    // load("3num.txt", img);
    // printf("A:%hhu, B:%hhu, C:%hhu...", img[0], img[1], img[2]);
    return 0;
}