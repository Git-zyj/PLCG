#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_12 = -320962784;
unsigned char var_17 = (unsigned char)111;
int var_19 = 705807462;
int zero = 0;
short var_20 = (short)-7795;
unsigned long long int var_21 = 12787026106698058200ULL;
short var_22 = (short)-9194;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
