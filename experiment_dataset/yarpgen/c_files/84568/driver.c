#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 9018435791322208600LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11576174424639410154ULL;
long long int var_9 = -1405870931333189898LL;
unsigned int var_12 = 3712781039U;
unsigned long long int var_15 = 8881227391259552554ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)227;
unsigned char var_19 = (unsigned char)165;
unsigned long long int var_20 = 12302874407589382235ULL;
unsigned char var_21 = (unsigned char)229;
unsigned short var_22 = (unsigned short)33926;
_Bool arr_0 [16] ;
short arr_1 [16] ;
long long int arr_2 [16] [16] ;
unsigned long long int arr_3 [16] [16] ;
short arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-10797;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 5067654221436803934LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 11144590808275077216ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)24898 : (short)30466;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
