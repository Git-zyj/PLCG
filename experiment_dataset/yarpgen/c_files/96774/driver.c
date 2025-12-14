#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2255850649302183633LL;
unsigned long long int var_6 = 9458431475175682402ULL;
int zero = 0;
unsigned long long int var_16 = 1284346405144436433ULL;
unsigned char var_17 = (unsigned char)76;
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
