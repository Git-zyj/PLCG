#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 995992595252291227LL;
unsigned long long int var_8 = 17451700996642732615ULL;
unsigned int var_10 = 694935418U;
long long int var_14 = -4338802835862180260LL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)37923;
int var_18 = 1284214774;
signed char var_19 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
