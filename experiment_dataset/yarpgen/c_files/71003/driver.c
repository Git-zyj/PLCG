#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2306075781U;
long long int var_10 = -4620617377616626812LL;
int zero = 0;
unsigned short var_12 = (unsigned short)44102;
unsigned short var_13 = (unsigned short)41741;
signed char var_14 = (signed char)-21;
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
