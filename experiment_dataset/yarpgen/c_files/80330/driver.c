#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5815815566740112518LL;
unsigned int var_11 = 281480591U;
unsigned long long int var_12 = 1751152631182311934ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4216778902U;
signed char var_15 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
