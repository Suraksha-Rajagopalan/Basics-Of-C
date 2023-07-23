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
    pid_t pid;
    pid = fork();
    float r, s;
    if(pid == 0){
        printf("Enter radius of circle: ");
        scanf("%f", &r);
        circle(r);
    }
    else{
        wait(NULL);
        pid = fork();
        if(pid == 0){
            printf("Enter side of square: ");
            scanf("%f", &s);
            square(s);
            exit(0);
        }
        else{
            wait(NULL);
            pid = fork();
        }
    }
    printf("\n\n\n");
    return 0;
}
