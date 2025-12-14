#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7714570186673389054ULL;
short var_4 = (short)20721;
unsigned int var_9 = 1588339299U;
short var_10 = (short)-15969;
unsigned short var_11 = (unsigned short)58901;
long long int var_13 = 8295900120072446534LL;
int zero = 0;
unsigned long long int var_14 = 1702047598051927074ULL;
unsigned char var_15 = (unsigned char)237;
unsigned char var_16 = (unsigned char)17;
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
