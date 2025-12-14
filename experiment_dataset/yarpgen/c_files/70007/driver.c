#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
long long int var_6 = 331422072671275594LL;
unsigned int var_11 = 3168015777U;
unsigned long long int var_12 = 4611584243593724970ULL;
unsigned char var_13 = (unsigned char)15;
int zero = 0;
unsigned long long int var_14 = 3658150104357950622ULL;
unsigned short var_15 = (unsigned short)25325;
unsigned int var_16 = 3159849659U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
