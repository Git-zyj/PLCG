#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)157;
long long int var_14 = -7252437297306260521LL;
short var_15 = (short)20165;
int zero = 0;
long long int var_17 = 4515593210272192917LL;
long long int var_18 = -5447556258272390730LL;
unsigned char var_19 = (unsigned char)54;
short var_20 = (short)27958;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
