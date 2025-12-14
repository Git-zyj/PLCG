#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3871592750U;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 355737581U;
int zero = 0;
signed char var_13 = (signed char)100;
signed char var_14 = (signed char)-8;
unsigned short var_15 = (unsigned short)32866;
void init() {
}

void checksum() {
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
