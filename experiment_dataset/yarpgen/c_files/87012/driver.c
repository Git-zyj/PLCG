#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2008634271U;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1773543739425088013LL;
int var_13 = 31544935;
unsigned char var_14 = (unsigned char)126;
int zero = 0;
signed char var_15 = (signed char)-6;
unsigned long long int var_16 = 6423310302162972392ULL;
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
