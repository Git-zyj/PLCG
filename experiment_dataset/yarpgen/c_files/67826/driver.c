#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-25989;
unsigned int var_5 = 427406364U;
unsigned char var_6 = (unsigned char)5;
unsigned int var_9 = 3358650850U;
int var_10 = -1630786674;
int zero = 0;
unsigned long long int var_14 = 7086583933048001633ULL;
unsigned int var_15 = 3463502633U;
long long int var_16 = -98138687492986568LL;
signed char var_17 = (signed char)72;
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
