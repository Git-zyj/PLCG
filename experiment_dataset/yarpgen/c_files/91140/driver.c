#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
_Bool var_1 = (_Bool)0;
long long int var_2 = -7479995697167765043LL;
signed char var_5 = (signed char)87;
unsigned int var_8 = 1144715533U;
unsigned char var_9 = (unsigned char)32;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 55604426U;
unsigned long long int var_13 = 17927641345986409415ULL;
unsigned char var_14 = (unsigned char)205;
unsigned char var_16 = (unsigned char)98;
unsigned char var_18 = (unsigned char)35;
short var_19 = (short)-5634;
int zero = 0;
int var_20 = 890949181;
unsigned long long int var_21 = 4996225212391502122ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 2819031336U;
unsigned short var_25 = (unsigned short)50108;
unsigned char var_26 = (unsigned char)79;
short var_27 = (short)7002;
short var_28 = (short)-28211;
unsigned long long int var_29 = 10903799703590793274ULL;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)84;
signed char var_32 = (signed char)2;
signed char arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
_Bool arr_2 [18] [18] ;
_Bool arr_14 [15] [15] [15] ;
unsigned char arr_19 [15] [15] [15] [15] ;
signed char arr_5 [18] ;
unsigned char arr_8 [15] ;
unsigned long long int arr_23 [18] ;
int arr_24 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 53681712883790463ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)237 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)6 : (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = 17027147617357834574ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = 2046561473;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
