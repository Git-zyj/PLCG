#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3097199936U;
signed char var_5 = (signed char)-89;
signed char var_6 = (signed char)85;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-9149;
int zero = 0;
signed char var_10 = (signed char)-116;
int var_11 = 678055162;
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
