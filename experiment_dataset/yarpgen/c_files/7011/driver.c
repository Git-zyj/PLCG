#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 787942658U;
unsigned int var_1 = 998556951U;
_Bool var_3 = (_Bool)1;
long long int var_6 = 2332284930139226273LL;
short var_7 = (short)-10387;
long long int var_8 = 8281463654492838136LL;
int var_9 = 316998899;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -1739378492078848479LL;
unsigned long long int var_12 = 8355522925971257054ULL;
short var_13 = (short)4520;
unsigned char var_14 = (unsigned char)191;
unsigned short var_15 = (unsigned short)58256;
long long int arr_0 [18] ;
short arr_1 [18] [18] ;
unsigned long long int arr_2 [18] ;
_Bool arr_4 [18] ;
unsigned long long int arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -9042351566646745623LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-31864;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 12365491401787002380ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = 5591073777775686043ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
