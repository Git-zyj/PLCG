#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17415;
signed char var_1 = (signed char)1;
unsigned long long int var_4 = 8414953294926096189ULL;
unsigned char var_6 = (unsigned char)103;
short var_10 = (short)13179;
unsigned char var_13 = (unsigned char)173;
long long int var_14 = -9155964973410552633LL;
unsigned long long int var_15 = 8820884305593044605ULL;
unsigned short var_16 = (unsigned short)39941;
int zero = 0;
unsigned char var_17 = (unsigned char)119;
unsigned char var_18 = (unsigned char)209;
long long int var_19 = 6573971371287201456LL;
void init() {
}

void checksum() {
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
