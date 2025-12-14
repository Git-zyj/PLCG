#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)4;
unsigned char var_1 = (unsigned char)194;
unsigned char var_2 = (unsigned char)10;
unsigned int var_5 = 3294053382U;
unsigned char var_6 = (unsigned char)84;
long long int var_8 = -2820208219510045783LL;
short var_9 = (short)32152;
long long int var_10 = -4477826123160140634LL;
unsigned char var_11 = (unsigned char)127;
short var_12 = (short)-25525;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)114;
unsigned int var_16 = 2929171305U;
short var_17 = (short)4976;
long long int var_19 = -7603737773523912031LL;
int zero = 0;
signed char var_20 = (signed char)-73;
int var_21 = 485437680;
short var_22 = (short)6719;
unsigned char var_23 = (unsigned char)60;
long long int var_24 = 6241735898724384198LL;
short var_25 = (short)-22200;
_Bool arr_1 [23] ;
short arr_3 [23] [23] ;
int arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)11341;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -649839293 : 1968115132;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
