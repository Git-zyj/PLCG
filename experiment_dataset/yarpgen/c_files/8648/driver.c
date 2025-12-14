#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2191799206U;
signed char var_1 = (signed char)-57;
unsigned long long int var_4 = 15836744325217569956ULL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 5684167107653666073ULL;
unsigned char var_9 = (unsigned char)69;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 298616267;
signed char var_12 = (signed char)77;
unsigned int var_13 = 1113288379U;
signed char var_14 = (signed char)-86;
unsigned int var_15 = 3874031421U;
unsigned char var_16 = (unsigned char)171;
signed char var_17 = (signed char)-15;
unsigned long long int var_18 = 11055491960716435731ULL;
long long int arr_0 [12] ;
unsigned char arr_1 [12] ;
int arr_3 [18] [18] ;
unsigned short arr_5 [18] ;
short arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1148897720177158024LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 683555433;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)13572;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)6851;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
