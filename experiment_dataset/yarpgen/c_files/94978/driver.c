#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-59;
unsigned char var_8 = (unsigned char)48;
short var_14 = (short)26267;
int zero = 0;
unsigned short var_15 = (unsigned short)37068;
unsigned short var_16 = (unsigned short)26615;
unsigned long long int var_17 = 10761718553249331722ULL;
unsigned long long int var_18 = 4311873348267121181ULL;
unsigned short var_19 = (unsigned short)23614;
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
