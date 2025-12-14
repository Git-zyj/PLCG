#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -790057120;
int var_5 = 1588346655;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-30505;
int var_14 = -505113370;
int zero = 0;
unsigned long long int var_15 = 2084822787414206555ULL;
_Bool var_16 = (_Bool)1;
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
