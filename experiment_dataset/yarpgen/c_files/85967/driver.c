#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)53306;
long long int var_9 = 4283608577540033721LL;
int var_11 = 512965786;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 13727497319118260784ULL;
unsigned short var_18 = (unsigned short)40004;
unsigned short var_19 = (unsigned short)25911;
unsigned short var_20 = (unsigned short)49668;
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
