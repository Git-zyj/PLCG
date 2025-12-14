#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1410496240;
_Bool var_4 = (_Bool)1;
signed char var_12 = (signed char)-69;
int zero = 0;
int var_16 = -541048322;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
