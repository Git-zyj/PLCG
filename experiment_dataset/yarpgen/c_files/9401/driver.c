#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17187;
short var_1 = (short)-24822;
short var_3 = (short)27391;
unsigned char var_4 = (unsigned char)182;
short var_7 = (short)-22575;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_15 = (short)-5009;
short var_16 = (short)13278;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
