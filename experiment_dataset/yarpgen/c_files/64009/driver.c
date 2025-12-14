#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2566299383U;
unsigned short var_9 = (unsigned short)48645;
unsigned long long int var_10 = 17428152655697569955ULL;
short var_11 = (short)21742;
int zero = 0;
unsigned short var_18 = (unsigned short)28772;
unsigned long long int var_19 = 18100394962601893202ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
