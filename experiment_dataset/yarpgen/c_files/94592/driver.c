#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)125;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 1915503418U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 9003276382710004882ULL;
int zero = 0;
long long int var_16 = -5166722326943834289LL;
signed char var_17 = (signed char)-54;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
