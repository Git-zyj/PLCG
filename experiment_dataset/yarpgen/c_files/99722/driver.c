#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1470747526;
int var_1 = 1529228200;
int var_2 = -669725830;
unsigned long long int var_3 = 16339415174992612252ULL;
unsigned char var_6 = (unsigned char)167;
unsigned short var_7 = (unsigned short)6706;
unsigned int var_11 = 1188022494U;
long long int var_12 = -4279024046959609279LL;
long long int var_13 = -1343550682105729790LL;
unsigned int var_15 = 3862570914U;
int var_16 = -1673210090;
long long int var_18 = -4093041868918848663LL;
int zero = 0;
int var_20 = -1974208820;
int var_21 = 914589498;
unsigned long long int var_22 = 4372823017046259101ULL;
unsigned short var_23 = (unsigned short)29925;
unsigned int var_24 = 989258618U;
long long int var_25 = 4547813979547879312LL;
long long int var_26 = 6018324322943753162LL;
unsigned long long int var_27 = 6219108897830673020ULL;
unsigned int var_28 = 1445470263U;
unsigned int var_29 = 2442705514U;
unsigned char var_30 = (unsigned char)222;
int arr_1 [11] ;
int arr_20 [13] ;
int arr_24 [25] ;
unsigned int arr_25 [25] ;
unsigned long long int arr_27 [25] ;
int arr_29 [25] [25] ;
unsigned int arr_14 [11] [11] [11] ;
int arr_22 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = -112325085;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -1937258242 : -1353802495;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = 1205518851;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = 2835196772U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = 7619530229769191042ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_29 [i_0] [i_1] = 34774282;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 1982021373U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -684285928 : 480789376;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
