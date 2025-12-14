#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 604523513;
unsigned short var_1 = (unsigned short)38369;
unsigned char var_3 = (unsigned char)118;
long long int var_6 = -6865708422782226017LL;
unsigned int var_9 = 3329894425U;
int zero = 0;
int var_19 = 1406395462;
signed char var_20 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
