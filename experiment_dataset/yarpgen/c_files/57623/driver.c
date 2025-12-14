#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
int var_1 = -110004863;
int var_3 = 1640056691;
unsigned char var_5 = (unsigned char)28;
int var_6 = -1734334552;
unsigned short var_7 = (unsigned short)58555;
int var_8 = 823565757;
int zero = 0;
unsigned long long int var_10 = 15376812925601614823ULL;
unsigned int var_11 = 3293722772U;
unsigned short var_12 = (unsigned short)41068;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
