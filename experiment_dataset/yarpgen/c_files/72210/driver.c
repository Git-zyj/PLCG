#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51753;
unsigned char var_3 = (unsigned char)126;
unsigned long long int var_4 = 16429536615697520968ULL;
int zero = 0;
unsigned long long int var_10 = 7454815672455267531ULL;
int var_11 = -1840947798;
short var_12 = (short)11845;
unsigned int var_13 = 1685505875U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
