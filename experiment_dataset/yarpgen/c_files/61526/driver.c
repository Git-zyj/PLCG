#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)212;
unsigned char var_4 = (unsigned char)198;
unsigned int var_8 = 1381997026U;
signed char var_12 = (signed char)-113;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -231397141;
unsigned int var_21 = 2310208054U;
long long int var_22 = -4505082881440188203LL;
unsigned char var_23 = (unsigned char)116;
unsigned char var_24 = (unsigned char)224;
unsigned char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)14 : (unsigned char)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
