#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1931;
_Bool var_14 = (_Bool)0;
signed char var_18 = (signed char)13;
int zero = 0;
int var_20 = -1070745319;
unsigned char var_21 = (unsigned char)195;
long long int var_22 = -7333557743860781317LL;
void init() {
}

void checksum() {
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
