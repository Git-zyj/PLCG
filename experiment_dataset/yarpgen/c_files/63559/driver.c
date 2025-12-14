#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-109;
unsigned long long int var_3 = 17188163579873797193ULL;
unsigned int var_8 = 983043788U;
unsigned long long int var_9 = 13340308090344175776ULL;
long long int var_10 = 1317057853496066072LL;
unsigned int var_11 = 2072323968U;
int zero = 0;
int var_12 = 1240229298;
unsigned char var_13 = (unsigned char)126;
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
