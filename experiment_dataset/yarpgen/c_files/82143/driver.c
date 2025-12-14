#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30370;
long long int var_1 = -8377014141910319822LL;
unsigned char var_2 = (unsigned char)85;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)113;
long long int var_6 = -8695510003616464365LL;
long long int var_8 = 8583092955384247374LL;
signed char var_9 = (signed char)70;
unsigned char var_10 = (unsigned char)13;
long long int var_11 = -5134633504781704218LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-19;
unsigned long long int var_15 = 10541856831177074400ULL;
unsigned int var_16 = 4224457187U;
long long int var_17 = 2589932248213303552LL;
unsigned long long int var_18 = 2552098783656212280ULL;
int arr_1 [21] [21] ;
short arr_5 [21] [21] ;
unsigned char arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = -2023783680;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)4168;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)181;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
