#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2731553091U;
unsigned short var_1 = (unsigned short)44412;
_Bool var_2 = (_Bool)0;
int var_3 = 1653415151;
unsigned long long int var_4 = 16259048783618472800ULL;
unsigned int var_5 = 3000533412U;
unsigned char var_6 = (unsigned char)114;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15523601361012367115ULL;
signed char var_9 = (signed char)45;
unsigned char var_11 = (unsigned char)233;
long long int var_12 = 7670299940492055917LL;
int zero = 0;
unsigned short var_14 = (unsigned short)16390;
int var_15 = 1040928792;
short var_16 = (short)32023;
int var_17 = 2072044890;
long long int var_18 = -3470624126279826951LL;
short var_19 = (short)8800;
long long int var_20 = -6355211008141602800LL;
long long int var_21 = -4401675785715749787LL;
signed char arr_0 [10] ;
unsigned int arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
unsigned char arr_3 [10] ;
signed char arr_4 [10] [10] [10] ;
long long int arr_5 [10] [10] ;
signed char arr_6 [10] [10] ;
signed char arr_7 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3743866598U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 2879608901U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -1570057139327686159LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-62 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)71 : (signed char)84;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
