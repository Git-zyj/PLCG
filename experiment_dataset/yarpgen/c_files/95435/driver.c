#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60322;
unsigned long long int var_3 = 1595212780296007804ULL;
short var_6 = (short)7796;
unsigned long long int var_14 = 9478112792955527891ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)31822;
unsigned char var_17 = (unsigned char)190;
void init() {
}

void checksum() {
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
