#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11300642148915725812ULL;
unsigned char var_1 = (unsigned char)138;
long long int var_2 = -7518862302300062485LL;
unsigned long long int var_3 = 4388173356005485046ULL;
int var_4 = -197189394;
signed char var_5 = (signed char)25;
unsigned long long int var_6 = 5755238438796054837ULL;
unsigned short var_7 = (unsigned short)41153;
unsigned long long int var_9 = 6724541933956631044ULL;
unsigned short var_10 = (unsigned short)7695;
int zero = 0;
unsigned char var_11 = (unsigned char)204;
unsigned long long int var_12 = 7409928256199091575ULL;
unsigned char var_13 = (unsigned char)12;
long long int var_14 = 5511905708916012479LL;
long long int var_15 = 8907790332505018513LL;
signed char var_16 = (signed char)39;
long long int var_17 = -3537386971560265130LL;
int var_18 = -2025772286;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)252;
signed char var_21 = (signed char)63;
int var_22 = 1352983474;
int arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned long long int arr_8 [24] ;
unsigned char arr_9 [24] ;
int arr_11 [24] [24] [24] ;
signed char arr_12 [24] [24] ;
unsigned char arr_2 [19] ;
long long int arr_7 [14] ;
int arr_10 [24] ;
int arr_13 [24] [24] ;
unsigned short arr_17 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 769433348;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 16495750487909679152ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -583423014;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = 7225921950888942027LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = -1827246997;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_13 [i_0] [i_1] = -1325835573;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)6083;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
