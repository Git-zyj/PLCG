#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_4 = (unsigned char)54;
unsigned long long int var_8 = 7174978540074787365ULL;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
unsigned long long int var_15 = 11775303770083774004ULL;
unsigned short var_16 = (unsigned short)17292;
void init() {
}

void checksum() {
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
