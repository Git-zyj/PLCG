#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1287208040U;
signed char var_11 = (signed char)-81;
unsigned char var_16 = (unsigned char)57;
int zero = 0;
short var_19 = (short)13126;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
