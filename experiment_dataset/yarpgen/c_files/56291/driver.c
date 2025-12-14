#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)139;
unsigned int var_6 = 2414701165U;
int var_9 = 886405016;
_Bool var_10 = (_Bool)0;
unsigned char var_13 = (unsigned char)4;
long long int var_15 = -7750763579519109773LL;
int zero = 0;
int var_16 = 1862228177;
unsigned int var_17 = 957147831U;
void init() {
}

void checksum() {
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
