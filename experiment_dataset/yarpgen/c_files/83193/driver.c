#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12796;
unsigned short var_4 = (unsigned short)37232;
unsigned short var_5 = (unsigned short)607;
unsigned char var_6 = (unsigned char)41;
signed char var_8 = (signed char)-44;
unsigned int var_9 = 2631286114U;
unsigned char var_10 = (unsigned char)170;
int zero = 0;
unsigned char var_12 = (unsigned char)150;
int var_13 = -2058390773;
unsigned short var_14 = (unsigned short)52420;
int var_15 = -1273401201;
long long int var_16 = 2846176768862683546LL;
unsigned char var_17 = (unsigned char)36;
unsigned short arr_2 [23] ;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)37328;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -521517297;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
