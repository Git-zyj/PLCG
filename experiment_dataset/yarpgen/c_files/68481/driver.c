#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2704610150U;
unsigned char var_2 = (unsigned char)43;
int var_7 = 1483256535;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-29;
int zero = 0;
int var_10 = 1763864708;
unsigned int var_11 = 4077840253U;
unsigned int var_12 = 3184497695U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
