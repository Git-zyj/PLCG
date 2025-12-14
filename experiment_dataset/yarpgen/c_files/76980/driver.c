#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19747;
int var_4 = 1126883246;
signed char var_6 = (signed char)76;
signed char var_9 = (signed char)-36;
unsigned long long int var_13 = 6766325972151756271ULL;
int zero = 0;
short var_14 = (short)2823;
unsigned char var_15 = (unsigned char)79;
void init() {
}

void checksum() {
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
