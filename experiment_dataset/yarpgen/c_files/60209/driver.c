#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5148283697617595609ULL;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-7087;
unsigned short var_5 = (unsigned short)2543;
unsigned int var_6 = 1758349318U;
short var_7 = (short)-22135;
int var_8 = -719840214;
unsigned short var_10 = (unsigned short)59951;
short var_12 = (short)12537;
unsigned long long int var_14 = 5407747007459873277ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)20362;
unsigned short var_16 = (unsigned short)23293;
unsigned short var_17 = (unsigned short)57417;
_Bool var_18 = (_Bool)0;
short var_19 = (short)24156;
signed char var_20 = (signed char)10;
unsigned long long int var_21 = 14913395413880178957ULL;
short var_22 = (short)7748;
int var_23 = -1118268322;
unsigned char var_24 = (unsigned char)43;
unsigned long long int var_25 = 9248412882427753409ULL;
_Bool var_26 = (_Bool)1;
short var_27 = (short)15832;
signed char var_28 = (signed char)-13;
unsigned int arr_0 [22] ;
unsigned long long int arr_3 [23] [23] ;
unsigned short arr_10 [23] [23] ;
unsigned short arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 2834176579U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 8844318236457116466ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)9441;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)19916;
}

void checksum() {
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
