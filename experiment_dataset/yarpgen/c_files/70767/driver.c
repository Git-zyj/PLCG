#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
long long int var_6 = -6211218198941689641LL;
short var_7 = (short)-15159;
short var_11 = (short)-7557;
int zero = 0;
long long int var_15 = 9005408722421816090LL;
long long int var_16 = -6321357612852630215LL;
short var_17 = (short)19489;
long long int var_18 = -3754655820892948774LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
