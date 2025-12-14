#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -825628773;
signed char var_1 = (signed char)58;
unsigned int var_6 = 3709491680U;
unsigned int var_7 = 1447867471U;
int zero = 0;
signed char var_12 = (signed char)52;
unsigned char var_13 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
