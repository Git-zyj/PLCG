#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16544429115540749976ULL;
_Bool var_2 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_9 = 472796816;
unsigned char var_11 = (unsigned char)118;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)31158;
unsigned char var_16 = (unsigned char)93;
short var_17 = (short)25956;
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
