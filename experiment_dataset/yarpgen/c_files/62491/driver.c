#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16422514142492771092ULL;
unsigned int var_1 = 435888892U;
unsigned long long int var_2 = 1498898064404053873ULL;
unsigned short var_4 = (unsigned short)61575;
unsigned long long int var_6 = 13647228588212892777ULL;
signed char var_12 = (signed char)84;
signed char var_13 = (signed char)30;
int zero = 0;
unsigned short var_14 = (unsigned short)32518;
unsigned long long int var_15 = 10836297636387760685ULL;
short var_16 = (short)32177;
unsigned long long int var_17 = 7457646697612526958ULL;
unsigned short var_18 = (unsigned short)30427;
_Bool var_19 = (_Bool)1;
int var_20 = 1056738984;
int var_21 = -1380574782;
short var_22 = (short)15089;
unsigned short var_23 = (unsigned short)3489;
unsigned short var_24 = (unsigned short)1505;
signed char var_25 = (signed char)-80;
unsigned long long int arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
unsigned int arr_3 [21] [21] ;
unsigned short arr_7 [21] [21] ;
unsigned short arr_8 [21] [21] [21] ;
unsigned short arr_12 [24] [24] ;
int arr_15 [24] ;
short arr_10 [21] [21] [21] ;
unsigned long long int arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14232054254300952116ULL : 1425207719317883587ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 2261965027U : 1195933537U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)57894;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 3437985563U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)54239;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)46979 : (unsigned short)45850;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)29743;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 1723785487;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)29506 : (short)-3118;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 8767446467058796503ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
