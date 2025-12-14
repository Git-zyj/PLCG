#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
signed char var_5 = (signed char)64;
unsigned char var_6 = (unsigned char)87;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-31875;
long long int var_13 = 3515474498682419731LL;
unsigned int var_14 = 1829257907U;
int zero = 0;
long long int var_16 = -7760022333881788737LL;
unsigned long long int var_17 = 15800584711139758968ULL;
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
