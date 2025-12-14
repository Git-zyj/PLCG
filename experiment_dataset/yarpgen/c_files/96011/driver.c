#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 281670494;
int var_1 = -128520646;
unsigned char var_3 = (unsigned char)169;
long long int var_4 = 5282809747833669929LL;
unsigned long long int var_5 = 13436654509563906415ULL;
unsigned short var_6 = (unsigned short)51730;
short var_7 = (short)-21719;
unsigned short var_8 = (unsigned short)42285;
unsigned char var_10 = (unsigned char)60;
int var_11 = -447736796;
unsigned long long int var_12 = 10608327493501219815ULL;
short var_13 = (short)-27667;
unsigned char var_14 = (unsigned char)238;
int zero = 0;
long long int var_16 = -7205858895905951799LL;
unsigned long long int var_17 = 12271449630561883994ULL;
long long int var_18 = 1024772140489115788LL;
short var_19 = (short)24021;
short var_20 = (short)7515;
long long int var_21 = -7571602943435322454LL;
unsigned long long int var_22 = 10258469989153271587ULL;
long long int var_23 = 1305180258301267851LL;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)50;
unsigned long long int arr_0 [23] ;
long long int arr_2 [23] ;
signed char arr_3 [25] [25] ;
long long int arr_4 [25] ;
_Bool arr_5 [24] [24] ;
unsigned short arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3835581608607458602ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -5598868493526990638LL : 841932683188485033LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)100 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 524491510441941705LL : -4232432630076229170LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (unsigned short)40934;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
