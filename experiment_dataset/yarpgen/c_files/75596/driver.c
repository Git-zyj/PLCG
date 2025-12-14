#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2300531765U;
unsigned int var_1 = 1970133605U;
_Bool var_5 = (_Bool)0;
int var_7 = 838883175;
int zero = 0;
short var_10 = (short)10041;
unsigned int var_11 = 861739760U;
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
