#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7582;
_Bool var_2 = (_Bool)0;
short var_4 = (short)22274;
short var_5 = (short)-32571;
short var_6 = (short)13825;
int zero = 0;
long long int var_10 = 3949907808972419706LL;
short var_11 = (short)-2763;
short var_12 = (short)-28006;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
