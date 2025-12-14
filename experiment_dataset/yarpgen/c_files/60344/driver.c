#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59614;
unsigned short var_3 = (unsigned short)45129;
unsigned long long int var_5 = 14805814733373308123ULL;
int var_7 = 1077980958;
_Bool var_8 = (_Bool)0;
short var_12 = (short)14947;
long long int var_14 = -5118319154480225258LL;
int zero = 0;
unsigned long long int var_15 = 7208072455212924697ULL;
unsigned long long int var_16 = 7797500618330171690ULL;
unsigned long long int var_17 = 13732519361485032849ULL;
unsigned long long int var_18 = 2270202673714621846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
