#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)61673;
unsigned char var_7 = (unsigned char)44;
long long int var_12 = 6766364101950376373LL;
int zero = 0;
short var_16 = (short)29388;
long long int var_17 = 8885126351610747151LL;
unsigned long long int var_18 = 13283208827810347281ULL;
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
