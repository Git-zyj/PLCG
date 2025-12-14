#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15172385328298093070ULL;
int var_1 = 1540349915;
int var_2 = 845658538;
unsigned int var_3 = 3552120869U;
int var_4 = -1425693024;
signed char var_9 = (signed char)81;
int zero = 0;
signed char var_13 = (signed char)3;
unsigned int var_14 = 2805348536U;
unsigned char var_15 = (unsigned char)182;
int var_16 = -1021448069;
signed char var_17 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
