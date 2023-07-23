#include  <stdio.h>
#include  <sys/types.h>
void circle(float r){
    float area = 3.14 * r * r;
    float perimeter = 2 * 3.14 * r;
    printf("Area of circle with radius %f is %f\n", r, area);
    printf("Perimeter of circle with radius %f is %f\n\n", r, perimeter);
}
void square(float s){
    float area = s * s;
    float perimeter = 4 * s;
    printf("Area of square with side %f is %f\n", s, area);
    printf("Perimeter of square with side %f is %f\n", s, perimeter);
}
int main(){
    pid_t pid1, pid2;
    float a;
    printf("Enter radius and side : ");
    scanf("%f", &a);
    pid1 = fork();
    if(pid1 == 0){
        circle(a);
        exit(0);
    }
    else{
        pid2 = fork();
        if(pid2 == 0){
            square(a);
            exit(0);
        }
        else{
            wait(NULL);
        }
    }
    printf("\n\n\n");
    return 0;
}
