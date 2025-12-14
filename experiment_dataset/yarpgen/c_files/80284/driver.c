#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-20;
unsigned long long int var_4 = 16664230902139518542ULL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-28998;
long long int var_8 = -4596295204385416703LL;
unsigned long long int var_10 = 13471002957037676837ULL;
unsigned long long int var_11 = 17914342592726364685ULL;
unsigned long long int var_12 = 10106892920820490419ULL;
long long int var_13 = -1169726880407895592LL;
int zero = 0;
short var_14 = (short)-6428;
short var_15 = (short)-5988;
unsigned char var_16 = (unsigned char)74;
signed char var_17 = (signed char)-98;
long long int var_18 = -3945245575579771226LL;
signed char arr_1 [19] ;
_Bool arr_2 [19] ;
int arr_5 [19] ;
_Bool arr_9 [22] ;
long long int arr_7 [19] ;
_Bool arr_13 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 873978596;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4096270313571775846LL : -5579720341106727413LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
