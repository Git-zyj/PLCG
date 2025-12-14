#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-73;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)104;
short var_5 = (short)1164;
unsigned int var_8 = 2340713969U;
long long int var_10 = -4882019815776717124LL;
unsigned short var_11 = (unsigned short)56965;
unsigned short var_12 = (unsigned short)48008;
unsigned char var_13 = (unsigned char)1;
unsigned long long int var_14 = 4149391155077226132ULL;
long long int var_15 = 1416812903711024686LL;
unsigned short var_16 = (unsigned short)22025;
int zero = 0;
unsigned char var_19 = (unsigned char)42;
unsigned long long int var_20 = 1016710606522071403ULL;
short var_21 = (short)-6473;
signed char var_22 = (signed char)54;
long long int var_23 = 2292688624673027293LL;
signed char var_24 = (signed char)-20;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)80;
unsigned char var_27 = (unsigned char)135;
unsigned short var_28 = (unsigned short)17437;
unsigned int var_29 = 586872000U;
unsigned char var_30 = (unsigned char)74;
unsigned char var_31 = (unsigned char)101;
signed char var_32 = (signed char)50;
signed char var_33 = (signed char)33;
unsigned char var_34 = (unsigned char)117;
unsigned short var_35 = (unsigned short)1216;
unsigned int arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned char arr_15 [13] [13] ;
int arr_17 [13] [13] [13] [13] [13] ;
short arr_20 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 4288609751U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)27653;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 1279701622;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)9651 : (short)26266;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)109;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
