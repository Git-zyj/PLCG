#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12670736689946550847ULL;
long long int var_2 = 4956290984099680322LL;
unsigned char var_11 = (unsigned char)166;
int var_14 = 437420770;
unsigned char var_15 = (unsigned char)108;
unsigned long long int var_19 = 14967085219056035240ULL;
int zero = 0;
int var_20 = -162560363;
unsigned char var_21 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
