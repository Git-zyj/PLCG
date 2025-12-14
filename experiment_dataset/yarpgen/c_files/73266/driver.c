#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_7 = (signed char)-110;
signed char var_9 = (signed char)-64;
unsigned int var_10 = 927405182U;
int zero = 0;
long long int var_13 = -3843805968714105182LL;
unsigned short var_14 = (unsigned short)33444;
int var_15 = 594222004;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
