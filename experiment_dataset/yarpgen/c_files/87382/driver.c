#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8563963936178871062LL;
long long int var_2 = 6329956930150126005LL;
unsigned short var_3 = (unsigned short)23971;
short var_4 = (short)-13730;
unsigned char var_6 = (unsigned char)224;
short var_7 = (short)-14638;
unsigned char var_9 = (unsigned char)198;
unsigned int var_12 = 938694901U;
unsigned long long int var_17 = 13604352899442573375ULL;
unsigned long long int var_19 = 16689666126830733717ULL;
int zero = 0;
unsigned int var_20 = 1870731926U;
unsigned char var_21 = (unsigned char)33;
unsigned int var_22 = 3322885884U;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)56729;
_Bool var_25 = (_Bool)1;
short var_26 = (short)28676;
unsigned int var_27 = 2608506702U;
unsigned long long int var_28 = 1273835799515765342ULL;
short arr_0 [13] ;
unsigned char arr_1 [13] ;
_Bool arr_2 [13] [13] [13] ;
_Bool arr_3 [13] [13] ;
unsigned char arr_4 [13] [13] [13] [13] ;
short arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-3634;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)135 : (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)29352;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
