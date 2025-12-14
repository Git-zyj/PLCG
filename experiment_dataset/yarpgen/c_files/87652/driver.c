#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)75;
unsigned short var_2 = (unsigned short)14653;
unsigned long long int var_3 = 349740467351267299ULL;
unsigned int var_5 = 2495418844U;
int var_8 = 752653368;
int zero = 0;
unsigned char var_10 = (unsigned char)58;
unsigned short var_11 = (unsigned short)40288;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
