#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2262981513U;
unsigned char var_9 = (unsigned char)249;
int zero = 0;
unsigned long long int var_14 = 8025940239476603148ULL;
unsigned long long int var_15 = 2911888073907822483ULL;
unsigned char var_16 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
