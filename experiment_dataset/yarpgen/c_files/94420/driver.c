#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13409090856057377060ULL;
unsigned int var_9 = 2234209959U;
unsigned char var_10 = (unsigned char)229;
unsigned int var_11 = 3433933487U;
int zero = 0;
unsigned char var_13 = (unsigned char)225;
short var_14 = (short)-2150;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
