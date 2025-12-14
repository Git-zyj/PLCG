#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 799289474U;
unsigned char var_2 = (unsigned char)251;
unsigned long long int var_4 = 16288127979918951798ULL;
unsigned char var_6 = (unsigned char)2;
long long int var_8 = 5280824210083466032LL;
unsigned long long int var_9 = 8296358187011999444ULL;
unsigned long long int var_10 = 15341110200861292347ULL;
unsigned short var_13 = (unsigned short)61593;
unsigned int var_14 = 2495429975U;
int zero = 0;
unsigned short var_15 = (unsigned short)22651;
long long int var_16 = 2263444502439340367LL;
signed char var_17 = (signed char)-59;
signed char var_18 = (signed char)-67;
short var_19 = (short)19706;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1483454399U;
long long int var_22 = 5994647492675984275LL;
unsigned int var_23 = 956212350U;
_Bool var_24 = (_Bool)1;
int var_25 = 504363570;
long long int var_26 = 4864649628185888113LL;
int var_27 = -1956431613;
unsigned int var_28 = 2468294416U;
unsigned int var_29 = 3717184070U;
long long int var_30 = 5593506327052639695LL;
short var_31 = (short)677;
int var_32 = -1691941030;
unsigned int var_33 = 1853233115U;
long long int var_34 = -734309818019027227LL;
unsigned long long int var_35 = 5948916891487889859ULL;
signed char var_36 = (signed char)-110;
unsigned short var_37 = (unsigned short)62270;
int var_38 = 969062055;
signed char arr_0 [21] ;
short arr_1 [21] [21] ;
long long int arr_2 [21] ;
unsigned short arr_7 [20] [20] ;
unsigned int arr_8 [20] [20] [20] ;
short arr_9 [20] [20] [20] [20] ;
unsigned char arr_11 [20] [20] [20] ;
long long int arr_13 [20] [20] [20] [20] ;
unsigned short arr_15 [20] ;
short arr_23 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (short)9169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -4506040360334660287LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)7593 : (unsigned short)31219;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1475918149U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)16793 : (short)-2497;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5370191007866546628LL : -4423920147805421408LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56945 : (unsigned short)33333;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (short)24592;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
