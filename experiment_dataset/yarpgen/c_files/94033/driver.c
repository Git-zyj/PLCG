#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)133;
int var_14 = -1183026596;
unsigned long long int var_16 = 7060686783275109445ULL;
short var_17 = (short)17153;
int zero = 0;
unsigned char var_20 = (unsigned char)79;
unsigned int var_21 = 2126540375U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
