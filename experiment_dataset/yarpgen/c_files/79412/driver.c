#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)155;
unsigned short var_7 = (unsigned short)34960;
unsigned short var_10 = (unsigned short)7944;
unsigned long long int var_12 = 5926308697242501705ULL;
int var_14 = 1265985820;
int zero = 0;
unsigned char var_15 = (unsigned char)252;
unsigned short var_16 = (unsigned short)49841;
unsigned char var_17 = (unsigned char)138;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
