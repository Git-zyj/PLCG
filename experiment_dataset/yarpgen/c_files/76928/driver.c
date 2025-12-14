#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19435;
unsigned char var_4 = (unsigned char)115;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1947947380718342677LL;
unsigned char var_7 = (unsigned char)175;
short var_10 = (short)-16789;
int zero = 0;
short var_14 = (short)5887;
unsigned char var_15 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
