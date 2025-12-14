#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)(-127 - 1);
unsigned long long int var_7 = 8278836534093310175ULL;
short var_10 = (short)32230;
int zero = 0;
long long int var_12 = 6675004054085525280LL;
signed char var_13 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
