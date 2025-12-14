#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27726;
signed char var_4 = (signed char)3;
short var_5 = (short)6185;
unsigned int var_10 = 1260416693U;
int zero = 0;
unsigned char var_12 = (unsigned char)16;
signed char var_13 = (signed char)-63;
signed char var_14 = (signed char)-96;
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
