#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49494;
unsigned short var_4 = (unsigned short)2886;
int var_5 = 1323778997;
unsigned int var_8 = 3957524342U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 2579841305023809873ULL;
int zero = 0;
short var_17 = (short)-8120;
unsigned short var_18 = (unsigned short)2685;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14569302954001160602ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
