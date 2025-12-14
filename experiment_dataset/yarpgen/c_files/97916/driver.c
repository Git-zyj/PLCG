#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-50;
unsigned int var_11 = 2835547321U;
signed char var_13 = (signed char)-121;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)12;
signed char var_18 = (signed char)-12;
unsigned int var_19 = 3198472158U;
short var_20 = (short)11776;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
