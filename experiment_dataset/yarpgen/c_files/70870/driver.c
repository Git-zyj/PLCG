#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)114;
unsigned long long int var_5 = 13551570423887014638ULL;
signed char var_8 = (signed char)36;
int zero = 0;
short var_10 = (short)-3381;
long long int var_11 = -8906149426129409023LL;
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
