#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26357;
unsigned char var_3 = (unsigned char)176;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1232926302U;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)117;
unsigned int var_9 = 2681148261U;
unsigned char var_10 = (unsigned char)143;
unsigned long long int var_13 = 12195662901514037959ULL;
unsigned int var_14 = 1613509615U;
short var_15 = (short)-31608;
int zero = 0;
unsigned long long int var_16 = 1728622227891445060ULL;
unsigned char var_17 = (unsigned char)111;
unsigned char var_18 = (unsigned char)26;
short var_19 = (short)-13454;
int var_20 = -150461123;
unsigned int var_21 = 1686057069U;
long long int arr_3 [23] [23] [23] ;
unsigned int arr_13 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5436398776711628506LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 4275358354U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
