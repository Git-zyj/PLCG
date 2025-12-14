#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1705927112U;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)185;
int zero = 0;
unsigned long long int var_16 = 1293471040026661864ULL;
unsigned short var_17 = (unsigned short)6197;
unsigned short var_18 = (unsigned short)57594;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
