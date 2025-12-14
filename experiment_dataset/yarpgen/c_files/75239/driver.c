#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 8750011354003399471LL;
int zero = 0;
short var_10 = (short)-14389;
long long int var_11 = 5654409476389482808LL;
unsigned long long int var_12 = 4811711525566297007ULL;
unsigned char var_13 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
