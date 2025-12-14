#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 111684525;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-125;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)107;
unsigned int var_14 = 3587354951U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
