#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned int var_6 = 1392056477U;
unsigned short var_8 = (unsigned short)51650;
int var_9 = -228317507;
int var_10 = 2009840679;
int zero = 0;
long long int var_11 = 2170477560399257385LL;
short var_12 = (short)-7983;
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
