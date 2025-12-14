#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)1;
unsigned char var_8 = (unsigned char)212;
unsigned char var_9 = (unsigned char)74;
int zero = 0;
unsigned char var_13 = (unsigned char)79;
unsigned char var_14 = (unsigned char)152;
unsigned char var_15 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
