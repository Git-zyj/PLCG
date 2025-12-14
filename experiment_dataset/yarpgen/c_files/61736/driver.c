#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -659610285;
unsigned int var_2 = 1058289419U;
long long int var_14 = -1637645019079201722LL;
unsigned short var_16 = (unsigned short)57256;
int zero = 0;
unsigned int var_17 = 1139469864U;
unsigned int var_18 = 1933806648U;
void init() {
}

void checksum() {
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
