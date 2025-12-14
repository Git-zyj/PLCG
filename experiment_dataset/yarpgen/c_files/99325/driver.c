#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30;
int var_1 = -1349579801;
long long int var_2 = 4869120054843001878LL;
unsigned short var_3 = (unsigned short)19577;
int var_4 = 1348712598;
int var_5 = 1973864956;
short var_7 = (short)-7264;
long long int var_8 = -6999806171535142951LL;
unsigned int var_9 = 3571316603U;
unsigned short var_10 = (unsigned short)31403;
unsigned char var_11 = (unsigned char)197;
short var_12 = (short)17889;
int zero = 0;
unsigned char var_13 = (unsigned char)219;
long long int var_14 = 4904105058368814025LL;
signed char var_15 = (signed char)7;
unsigned short var_16 = (unsigned short)54982;
short var_17 = (short)-20547;
long long int var_18 = 2662248694557258002LL;
unsigned char var_19 = (unsigned char)97;
unsigned char var_20 = (unsigned char)200;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
unsigned int arr_3 [11] [11] ;
short arr_4 [11] [11] [11] ;
long long int arr_5 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 7802072183193769693ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2950329071927077657ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = 1455254133U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)11276;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -625748978193539922LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
