#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3885978181U;
unsigned char var_8 = (unsigned char)236;
unsigned long long int var_10 = 7117812322795405688ULL;
signed char var_13 = (signed char)26;
int var_14 = -1923983216;
int zero = 0;
unsigned short var_15 = (unsigned short)21659;
unsigned int var_16 = 1224329475U;
void init() {
}

void checksum() {
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
