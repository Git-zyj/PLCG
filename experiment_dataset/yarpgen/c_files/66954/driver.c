#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6875285561745030526LL;
short var_4 = (short)10806;
long long int var_12 = -3405422877167313889LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1068682769;
unsigned short var_21 = (unsigned short)17629;
unsigned short var_22 = (unsigned short)33675;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
