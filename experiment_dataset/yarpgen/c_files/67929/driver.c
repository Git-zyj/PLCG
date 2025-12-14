#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2586;
long long int var_9 = -2355476484533868545LL;
unsigned char var_10 = (unsigned char)253;
unsigned int var_11 = 1067899876U;
int zero = 0;
unsigned int var_12 = 418482246U;
unsigned int var_13 = 3630755579U;
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
