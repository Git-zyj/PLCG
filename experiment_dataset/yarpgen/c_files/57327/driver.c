#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7497187691323015026ULL;
short var_1 = (short)6984;
_Bool var_2 = (_Bool)1;
unsigned long long int var_6 = 2437079018497688553ULL;
unsigned int var_7 = 3089017903U;
int zero = 0;
short var_10 = (short)25282;
short var_11 = (short)-15403;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
