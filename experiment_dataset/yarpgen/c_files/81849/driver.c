#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)64401;
long long int var_7 = -3728160914067224454LL;
unsigned long long int var_10 = 12118573479086512409ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)58322;
int zero = 0;
short var_15 = (short)-22803;
int var_16 = -303730745;
long long int var_17 = -8211069681972169305LL;
unsigned short var_18 = (unsigned short)40665;
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
