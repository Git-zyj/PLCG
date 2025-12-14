#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 518735258;
signed char var_6 = (signed char)112;
unsigned int var_12 = 3534400456U;
long long int var_13 = 8952985475191285432LL;
unsigned long long int var_15 = 13120891139115708164ULL;
int zero = 0;
short var_16 = (short)2816;
short var_17 = (short)31823;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
