#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_10 = (unsigned short)62889;
short var_12 = (short)-4863;
long long int var_17 = -3601169482130056178LL;
int zero = 0;
long long int var_19 = -5135268435592916302LL;
short var_20 = (short)-30946;
void init() {
}

void checksum() {
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
