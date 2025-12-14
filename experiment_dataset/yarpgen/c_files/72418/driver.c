#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 398913326;
unsigned int var_5 = 826063300U;
unsigned char var_6 = (unsigned char)219;
unsigned int var_8 = 261694433U;
int zero = 0;
unsigned int var_12 = 1126622672U;
unsigned char var_13 = (unsigned char)130;
unsigned long long int var_14 = 8225018161531339771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
