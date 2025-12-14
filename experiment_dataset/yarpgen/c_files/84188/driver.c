#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-25;
unsigned long long int var_4 = 18067012049305871091ULL;
signed char var_5 = (signed char)-119;
unsigned int var_6 = 1177174131U;
short var_10 = (short)6113;
signed char var_14 = (signed char)-15;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)24166;
short var_17 = (short)30230;
unsigned char var_18 = (unsigned char)72;
short var_19 = (short)-72;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 359281605U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
