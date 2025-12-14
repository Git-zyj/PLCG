#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
signed char var_11 = (signed char)30;
signed char var_12 = (signed char)42;
signed char var_13 = (signed char)-14;
unsigned long long int var_14 = 9301243044954547149ULL;
signed char var_15 = (signed char)-38;
unsigned long long int var_16 = 14873618984821185904ULL;
signed char var_17 = (signed char)75;
unsigned long long int var_18 = 8728018341324337403ULL;
signed char var_19 = (signed char)-125;
signed char var_20 = (signed char)11;
signed char var_21 = (signed char)123;
signed char arr_6 [20] ;
signed char arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)-100;
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
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
