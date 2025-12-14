#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6757975127899579215LL;
unsigned short var_1 = (unsigned short)61908;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_8 = 3171843149U;
unsigned long long int var_9 = 13328249551497693605ULL;
unsigned short var_13 = (unsigned short)14334;
int var_16 = -605834589;
int zero = 0;
unsigned char var_18 = (unsigned char)159;
unsigned short var_19 = (unsigned short)13363;
unsigned short var_20 = (unsigned short)51361;
unsigned int var_21 = 3776459690U;
unsigned short var_22 = (unsigned short)22436;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-18989;
unsigned long long int var_25 = 4862193309442793273ULL;
unsigned char var_26 = (unsigned char)100;
short var_27 = (short)-554;
_Bool var_28 = (_Bool)1;
unsigned long long int arr_1 [11] [11] ;
unsigned int arr_3 [19] ;
_Bool arr_4 [19] [19] ;
unsigned char arr_8 [19] ;
short arr_13 [19] [19] ;
unsigned int arr_2 [11] ;
long long int arr_5 [19] [19] ;
unsigned short arr_6 [19] ;
unsigned short arr_10 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 2537116486760142491ULL : 2102471509918645433ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 3458586977U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (short)8476;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 944893639U : 2925567110U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = -2742832334203192697LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)25748;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)30785;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
