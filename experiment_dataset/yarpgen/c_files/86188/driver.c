#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20074;
unsigned int var_1 = 2305422442U;
unsigned int var_9 = 419015713U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)29687;
signed char var_15 = (signed char)-71;
unsigned int var_16 = 241560630U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
