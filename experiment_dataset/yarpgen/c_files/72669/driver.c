#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-9;
unsigned short var_8 = (unsigned short)35097;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)55042;
int zero = 0;
unsigned int var_12 = 4265374858U;
int var_13 = -173386850;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
