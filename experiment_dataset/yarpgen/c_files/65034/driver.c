#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22965;
unsigned int var_10 = 3547712735U;
short var_16 = (short)-27732;
int zero = 0;
unsigned char var_18 = (unsigned char)233;
unsigned char var_19 = (unsigned char)138;
unsigned long long int var_20 = 1385833802937463459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
