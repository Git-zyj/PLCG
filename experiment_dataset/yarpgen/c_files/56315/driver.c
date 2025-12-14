#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2544;
unsigned char var_6 = (unsigned char)65;
int var_9 = 1262553545;
signed char var_11 = (signed char)-18;
int var_12 = 491323294;
int zero = 0;
unsigned int var_13 = 2857000320U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)33;
short var_17 = (short)-30858;
int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -199090307;
}

void checksum() {
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
