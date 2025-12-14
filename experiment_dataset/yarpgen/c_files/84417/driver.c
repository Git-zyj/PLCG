#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1239294159;
_Bool var_1 = (_Bool)0;
unsigned char var_4 = (unsigned char)166;
signed char var_11 = (signed char)22;
int zero = 0;
signed char var_12 = (signed char)107;
unsigned int var_13 = 3542964974U;
int var_14 = 83513685;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
