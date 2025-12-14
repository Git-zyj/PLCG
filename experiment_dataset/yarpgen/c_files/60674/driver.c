#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 600513827U;
unsigned char var_8 = (unsigned char)107;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 9994277706428500142ULL;
long long int var_13 = 5433456074024103396LL;
long long int var_16 = 8111375036834106326LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)14933;
int var_19 = -1783674260;
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
