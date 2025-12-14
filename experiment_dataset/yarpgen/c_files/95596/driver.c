#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)38;
unsigned long long int var_6 = 3730065939989686476ULL;
unsigned int var_8 = 2670699646U;
_Bool var_10 = (_Bool)1;
long long int var_17 = 9114945281236522204LL;
int zero = 0;
int var_18 = 1381559437;
long long int var_19 = 2812040620236777200LL;
unsigned char var_20 = (unsigned char)10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
