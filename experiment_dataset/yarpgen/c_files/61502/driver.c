#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)136;
unsigned char var_8 = (unsigned char)1;
unsigned char var_10 = (unsigned char)20;
unsigned long long int var_11 = 11150464664348687147ULL;
unsigned char var_12 = (unsigned char)116;
int var_16 = 2013259588;
int zero = 0;
long long int var_18 = -7246279321001592337LL;
unsigned int var_19 = 3667328061U;
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
