#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2688694101310268012LL;
unsigned short var_6 = (unsigned short)6851;
signed char var_7 = (signed char)-126;
signed char var_8 = (signed char)-71;
_Bool var_12 = (_Bool)0;
unsigned int var_17 = 1381667517U;
int zero = 0;
unsigned int var_20 = 3871280971U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
