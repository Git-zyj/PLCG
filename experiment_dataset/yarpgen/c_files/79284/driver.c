#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)21129;
short var_2 = (short)1066;
unsigned int var_3 = 3136294093U;
unsigned char var_4 = (unsigned char)122;
short var_5 = (short)16162;
unsigned char var_6 = (unsigned char)61;
short var_8 = (short)-1042;
unsigned char var_10 = (unsigned char)234;
short var_12 = (short)-12434;
unsigned char var_13 = (unsigned char)229;
short var_17 = (short)-8763;
unsigned char var_19 = (unsigned char)7;
int zero = 0;
short var_20 = (short)19339;
short var_21 = (short)-4686;
short var_22 = (short)-15956;
unsigned char var_23 = (unsigned char)30;
unsigned char var_24 = (unsigned char)69;
unsigned char var_25 = (unsigned char)123;
unsigned char var_26 = (unsigned char)124;
short var_27 = (short)9495;
short var_28 = (short)-26307;
short arr_0 [24] [24] ;
unsigned int arr_1 [24] ;
unsigned char arr_2 [24] [24] ;
short arr_9 [24] [24] ;
short arr_3 [24] [24] ;
unsigned char arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-877;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2112416483U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)12489;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)11156;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)84;
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
