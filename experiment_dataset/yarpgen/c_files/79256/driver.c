#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned char var_3 = (unsigned char)126;
unsigned int var_4 = 2878410075U;
unsigned char var_5 = (unsigned char)246;
unsigned int var_7 = 2317984112U;
int var_9 = -1047139606;
int zero = 0;
long long int var_10 = -2753652252118084066LL;
unsigned int var_11 = 4185265895U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
