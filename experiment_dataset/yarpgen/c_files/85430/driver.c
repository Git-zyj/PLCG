#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)28994;
unsigned short var_6 = (unsigned short)2443;
unsigned short var_9 = (unsigned short)3325;
unsigned short var_13 = (unsigned short)28829;
int zero = 0;
unsigned short var_14 = (unsigned short)34395;
unsigned short var_15 = (unsigned short)9205;
unsigned short var_16 = (unsigned short)21161;
unsigned short var_17 = (unsigned short)57012;
unsigned short var_18 = (unsigned short)2661;
unsigned short var_19 = (unsigned short)45122;
unsigned short var_20 = (unsigned short)57775;
unsigned short var_21 = (unsigned short)64547;
unsigned short var_22 = (unsigned short)22763;
unsigned short var_23 = (unsigned short)4573;
unsigned short var_24 = (unsigned short)19322;
unsigned short arr_1 [14] ;
unsigned short arr_2 [14] [14] ;
unsigned short arr_3 [14] ;
unsigned short arr_5 [14] [14] ;
unsigned short arr_9 [14] ;
unsigned short arr_4 [14] ;
unsigned short arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)44741;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)36086;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)1044;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)49459;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (unsigned short)14524;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)36938;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)52095;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
