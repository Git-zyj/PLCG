#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_5 = 3969839928U;
unsigned long long int var_7 = 5235959615858203379ULL;
unsigned long long int var_8 = 17671371084459434157ULL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1505497736U;
int zero = 0;
short var_15 = (short)-30656;
int var_16 = -2043247764;
long long int var_17 = -1760447197112106537LL;
void init() {
}

void checksum() {
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
