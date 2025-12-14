#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2109757002U;
unsigned char var_4 = (unsigned char)190;
short var_8 = (short)4638;
unsigned char var_10 = (unsigned char)238;
int zero = 0;
signed char var_11 = (signed char)-42;
unsigned char var_12 = (unsigned char)102;
short var_13 = (short)2831;
unsigned char var_14 = (unsigned char)27;
unsigned long long int var_15 = 3190116866195965126ULL;
short arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-4945;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
