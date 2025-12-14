#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -6108148943115156079LL;
unsigned char var_4 = (unsigned char)51;
short var_5 = (short)11768;
unsigned char var_7 = (unsigned char)98;
unsigned char var_9 = (unsigned char)82;
unsigned short var_11 = (unsigned short)46847;
int zero = 0;
unsigned short var_12 = (unsigned short)23323;
unsigned int var_13 = 2854476257U;
signed char var_14 = (signed char)0;
signed char var_15 = (signed char)77;
unsigned int var_16 = 2933452516U;
unsigned int var_17 = 2691295649U;
short arr_0 [22] ;
unsigned long long int arr_1 [22] ;
short arr_2 [22] [22] ;
unsigned long long int arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] [22] [22] ;
long long int arr_7 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-31481;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 15979904440091527695ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)8630 : (short)-7693;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 6714167756350162625ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 14268404U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? -1124578052413784454LL : -3195381872649917815LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
