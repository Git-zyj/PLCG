#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)209;
int zero = 0;
unsigned char var_15 = (unsigned char)220;
unsigned char var_16 = (unsigned char)1;
unsigned short var_17 = (unsigned short)60475;
unsigned long long int var_18 = 2531165580374939348ULL;
unsigned char var_19 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
