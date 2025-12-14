#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44104;
short var_2 = (short)11831;
short var_9 = (short)-7034;
unsigned int var_10 = 1033194243U;
unsigned char var_12 = (unsigned char)239;
unsigned char var_13 = (unsigned char)79;
unsigned int var_16 = 648181348U;
int zero = 0;
long long int var_18 = 8242624409991265470LL;
unsigned char var_19 = (unsigned char)42;
unsigned long long int var_20 = 6928624754249498596ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
