#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1582;
signed char var_5 = (signed char)88;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)88;
int zero = 0;
signed char var_15 = (signed char)-75;
long long int var_16 = 7878101505933236644LL;
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
