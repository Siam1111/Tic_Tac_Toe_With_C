#include <stdio.h>
void change(int* z){
    *z = 1;
}
// int main(){
//     int g = 0;
//     //int x = ('6' == '6' == '6' ? 1 : 2); // Why this is false ? More problem like that
//     //int x = (8 == 8 == 8  ? 1 : 2); // Why this is false ? More problem like that
//     printf("%d" , x);
// }
// int main(){
//     int g = 0;
//     //int x = ('6' == '6' == '6' ? 1 : 2); // Why this is false ? More problem like that
//     //int x = (8 == 8 == 8  ? 1 : 2); // Why this is false ? More problem like that
//     printf("%d" , x);
//}
int main(){
    int g = 0;
    change(&g);
    printf("%i" , g);
}