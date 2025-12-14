#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7121;
unsigned char var_2 = (unsigned char)44;
unsigned int var_10 = 3960161465U;
int zero = 0;
int var_11 = 2075319880;
signed char var_12 = (signed char)-47;
unsigned int var_13 = 1485876443U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
