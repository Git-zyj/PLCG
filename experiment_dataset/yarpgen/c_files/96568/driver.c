#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 691918683U;
signed char var_1 = (signed char)61;
unsigned int var_2 = 2103473441U;
signed char var_3 = (signed char)32;
unsigned short var_4 = (unsigned short)45415;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1147321568U;
unsigned char var_7 = (unsigned char)177;
unsigned char var_8 = (unsigned char)71;
unsigned char var_9 = (unsigned char)112;
unsigned char var_10 = (unsigned char)231;
unsigned short var_11 = (unsigned short)7422;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-39;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-76;
unsigned char var_16 = (unsigned char)36;
unsigned int var_17 = 1710614882U;
unsigned char var_18 = (unsigned char)193;
signed char var_19 = (signed char)20;
unsigned short var_20 = (unsigned short)56439;
unsigned short var_21 = (unsigned short)62582;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)19815;
unsigned char var_24 = (unsigned char)53;
signed char var_25 = (signed char)-29;
unsigned char var_26 = (unsigned char)212;
signed char var_27 = (signed char)51;
unsigned int var_28 = 2286590513U;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 605415995U;
unsigned char var_31 = (unsigned char)212;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)-120;
unsigned int arr_3 [25] ;
unsigned int arr_10 [16] [16] ;
unsigned short arr_22 [16] [16] [16] ;
unsigned int arr_25 [16] ;
unsigned int arr_29 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_32 [16] [16] ;
unsigned char arr_33 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1736929681U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 3732625449U : 220680549U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)45593 : (unsigned short)17762;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 2860148290U : 180933934U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 4099989992U : 1043176330U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_32 [i_0] [i_1] = (i_0 % 2 == 0) ? 2960586539U : 976230862U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)42;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
