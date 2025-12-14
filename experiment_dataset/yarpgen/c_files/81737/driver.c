#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3206879378U;
unsigned char var_2 = (unsigned char)223;
short var_3 = (short)23215;
unsigned char var_4 = (unsigned char)192;
unsigned short var_5 = (unsigned short)12601;
short var_6 = (short)-12765;
int var_7 = 1037139148;
short var_8 = (short)-11152;
signed char var_9 = (signed char)33;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 998617738119604141ULL;
short var_15 = (short)11661;
unsigned char var_16 = (unsigned char)134;
unsigned int var_17 = 830687935U;
long long int var_18 = -2505175393406523893LL;
int var_19 = -1827486287;
unsigned short var_20 = (unsigned short)14682;
short var_21 = (short)28874;
int var_22 = -1176903152;
unsigned char var_23 = (unsigned char)211;
signed char var_24 = (signed char)74;
unsigned long long int var_25 = 1179664648048676763ULL;
_Bool var_26 = (_Bool)0;
int arr_0 [12] ;
unsigned int arr_1 [12] ;
signed char arr_3 [12] [12] [12] ;
signed char arr_5 [12] [12] ;
short arr_6 [12] [12] ;
unsigned char arr_8 [12] ;
int arr_10 [12] ;
unsigned short arr_11 [12] [12] ;
unsigned long long int arr_14 [12] ;
unsigned int arr_15 [12] [12] ;
signed char arr_18 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2032257317;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 1761606181U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)26033 : (short)22836;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 733186688 : 861876901;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)11301 : (unsigned short)24277;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 1807606979515201062ULL : 16100315533871153920ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 3544911024U : 767998424U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-124 : (signed char)24;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
