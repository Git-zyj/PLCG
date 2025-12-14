#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2140253927U;
unsigned char var_4 = (unsigned char)225;
int var_5 = 1388940511;
unsigned long long int var_8 = 9002143369784530673ULL;
unsigned int var_10 = 388269863U;
short var_14 = (short)20640;
int zero = 0;
unsigned short var_20 = (unsigned short)19602;
short var_21 = (short)29354;
unsigned short var_22 = (unsigned short)59084;
unsigned char var_23 = (unsigned char)22;
unsigned char var_24 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
