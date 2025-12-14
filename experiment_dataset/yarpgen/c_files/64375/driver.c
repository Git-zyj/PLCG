#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7494654812287524485LL;
short var_3 = (short)-2905;
short var_4 = (short)-31808;
long long int var_5 = -1807350583633077715LL;
int var_6 = -1600388169;
long long int var_9 = -5584398571376954171LL;
int zero = 0;
short var_11 = (short)-5447;
unsigned short var_12 = (unsigned short)39522;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
