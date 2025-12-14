#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 311742908;
short var_2 = (short)-32324;
int var_6 = -1653645894;
short var_7 = (short)12550;
int zero = 0;
unsigned int var_13 = 2769522933U;
unsigned short var_14 = (unsigned short)62915;
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
