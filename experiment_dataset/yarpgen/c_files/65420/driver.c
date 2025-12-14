#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46664;
unsigned short var_3 = (unsigned short)40192;
unsigned short var_4 = (unsigned short)56587;
long long int var_6 = 7285512062670218112LL;
short var_7 = (short)-40;
unsigned int var_8 = 2193221563U;
unsigned int var_9 = 1910119811U;
unsigned char var_12 = (unsigned char)142;
signed char var_13 = (signed char)-66;
int zero = 0;
unsigned char var_14 = (unsigned char)8;
unsigned short var_15 = (unsigned short)43162;
unsigned char var_16 = (unsigned char)32;
int var_17 = -2125054447;
short var_18 = (short)30526;
long long int var_19 = 3033759573936877506LL;
short var_20 = (short)5589;
short var_21 = (short)-31441;
unsigned char var_22 = (unsigned char)149;
short var_23 = (short)-12594;
unsigned int var_24 = 4085178202U;
signed char var_25 = (signed char)-38;
unsigned int var_26 = 1674389430U;
short var_27 = (short)-21484;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)18247;
int var_30 = -1056288806;
short var_31 = (short)27153;
unsigned int var_32 = 2244320004U;
long long int arr_0 [21] ;
short arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] [21] ;
long long int arr_4 [21] [21] [21] ;
signed char arr_11 [11] ;
long long int arr_12 [11] ;
unsigned long long int arr_6 [21] [21] ;
unsigned long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1159439858504784715LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (short)7916;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 4278134095U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 713042461U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 4937520827280839460LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = -7733362440808221561LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 4833940847853917627ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 7166161448871170464ULL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
