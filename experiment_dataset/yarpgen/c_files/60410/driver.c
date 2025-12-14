#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4167575142U;
short var_10 = (short)567;
unsigned int var_12 = 1272605177U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)3709;
signed char var_21 = (signed char)-86;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
