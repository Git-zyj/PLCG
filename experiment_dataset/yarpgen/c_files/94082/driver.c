#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15294288110690894712ULL;
short var_7 = (short)31887;
long long int var_11 = -4964566891172116563LL;
short var_12 = (short)-22151;
short var_15 = (short)3037;
int zero = 0;
long long int var_18 = 703739459300977818LL;
int var_19 = 1344859932;
void init() {
}

void checksum() {
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
