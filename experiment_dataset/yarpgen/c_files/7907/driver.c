#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8720874916542973905LL;
signed char var_1 = (signed char)32;
unsigned int var_4 = 2010394287U;
signed char var_6 = (signed char)31;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2724760310U;
void init() {
}

void checksum() {
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
