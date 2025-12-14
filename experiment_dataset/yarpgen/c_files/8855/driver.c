#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10966120178371521316ULL;
unsigned short var_1 = (unsigned short)55168;
unsigned int var_5 = 3583490287U;
unsigned int var_6 = 1739365452U;
unsigned long long int var_11 = 8033755505607697402ULL;
unsigned long long int var_16 = 16268524751809228687ULL;
unsigned int var_18 = 3368938702U;
int zero = 0;
long long int var_20 = 5307968427050834365LL;
unsigned char var_21 = (unsigned char)50;
unsigned short var_22 = (unsigned short)12856;
unsigned int var_23 = 1983712861U;
long long int var_24 = 831026072411251848LL;
unsigned long long int var_25 = 12629273975109771250ULL;
unsigned char var_26 = (unsigned char)181;
unsigned long long int var_27 = 17443696400680648638ULL;
signed char arr_0 [14] ;
signed char arr_1 [14] [14] ;
unsigned char arr_2 [14] ;
short arr_3 [14] [14] [14] ;
signed char arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-18189;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)62 : (signed char)25;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
