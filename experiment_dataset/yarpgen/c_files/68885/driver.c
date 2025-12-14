#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)30273;
unsigned int var_3 = 3023589019U;
unsigned short var_5 = (unsigned short)16437;
short var_6 = (short)31946;
unsigned int var_7 = 1868181112U;
unsigned short var_8 = (unsigned short)42331;
long long int var_9 = -8852972819062869519LL;
short var_10 = (short)11772;
short var_11 = (short)-20095;
signed char var_12 = (signed char)-36;
unsigned char var_13 = (unsigned char)39;
unsigned int var_14 = 4080442403U;
int zero = 0;
unsigned int var_15 = 3741264369U;
unsigned short var_16 = (unsigned short)56399;
unsigned short var_17 = (unsigned short)12492;
unsigned int var_18 = 1378638630U;
unsigned short var_19 = (unsigned short)8395;
unsigned char var_20 = (unsigned char)161;
_Bool var_21 = (_Bool)0;
short var_22 = (short)28490;
unsigned short var_23 = (unsigned short)43304;
unsigned int var_24 = 2537211494U;
unsigned short var_25 = (unsigned short)25109;
unsigned char var_26 = (unsigned char)73;
signed char var_27 = (signed char)72;
unsigned int var_28 = 3161132653U;
_Bool var_29 = (_Bool)1;
unsigned short var_30 = (unsigned short)23351;
unsigned long long int arr_1 [11] [11] ;
signed char arr_2 [11] ;
signed char arr_4 [11] [11] [11] ;
unsigned short arr_5 [11] [11] [11] ;
unsigned int arr_6 [20] [20] ;
unsigned int arr_7 [20] ;
signed char arr_8 [20] ;
int arr_10 [20] ;
unsigned short arr_11 [20] [20] ;
unsigned int arr_12 [20] ;
unsigned long long int arr_16 [20] [20] [20] [20] [20] ;
short arr_18 [20] ;
unsigned short arr_29 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 2938307640456028491ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)54025;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2733823483U : 1764190197U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 2210702639U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = -318187779;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)2133;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 3396020347U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 11957649484696328944ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (short)20428 : (short)1831;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)17651 : (unsigned short)8746;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
