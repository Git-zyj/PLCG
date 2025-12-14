#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
unsigned char var_1 = (unsigned char)173;
int var_2 = 1212638846;
short var_3 = (short)23772;
short var_7 = (short)4949;
unsigned char var_9 = (unsigned char)179;
signed char var_12 = (signed char)41;
int zero = 0;
signed char var_14 = (signed char)5;
signed char var_15 = (signed char)109;
unsigned char var_16 = (unsigned char)179;
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
