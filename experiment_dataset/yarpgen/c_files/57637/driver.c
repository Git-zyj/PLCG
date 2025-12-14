#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6933;
signed char var_5 = (signed char)21;
unsigned char var_11 = (unsigned char)133;
unsigned short var_12 = (unsigned short)14477;
unsigned short var_18 = (unsigned short)38862;
int zero = 0;
int var_19 = 1188545307;
unsigned int var_20 = 2263520791U;
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
