#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37324;
int var_4 = -904931;
_Bool var_6 = (_Bool)0;
unsigned char var_10 = (unsigned char)253;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
unsigned short var_14 = (unsigned short)63234;
int var_15 = 2039915613;
unsigned char var_16 = (unsigned char)138;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
