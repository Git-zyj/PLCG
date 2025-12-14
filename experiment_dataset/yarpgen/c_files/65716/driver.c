#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
signed char var_5 = (signed char)-63;
unsigned short var_6 = (unsigned short)29926;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2871206898U;
int zero = 0;
short var_20 = (short)30832;
unsigned int var_21 = 1488395585U;
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
