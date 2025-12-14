#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11335;
signed char var_4 = (signed char)-21;
long long int var_5 = 6374875067400838304LL;
short var_6 = (short)12020;
int var_8 = -1514567621;
signed char var_9 = (signed char)82;
int zero = 0;
long long int var_14 = 4149534898275166735LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)246;
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
