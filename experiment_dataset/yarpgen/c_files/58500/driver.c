#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)79;
unsigned long long int var_2 = 15218534545756819376ULL;
unsigned char var_3 = (unsigned char)79;
int var_4 = 2026589734;
unsigned char var_5 = (unsigned char)91;
unsigned char var_7 = (unsigned char)176;
signed char var_8 = (signed char)15;
short var_9 = (short)-29784;
int zero = 0;
long long int var_12 = 1879673860073381824LL;
unsigned char var_13 = (unsigned char)10;
int var_14 = -2064124989;
unsigned char var_15 = (unsigned char)37;
unsigned char var_16 = (unsigned char)122;
int arr_1 [18] ;
int arr_6 [18] [18] ;
long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1230379905;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 1855800832;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -5811000912538195265LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
