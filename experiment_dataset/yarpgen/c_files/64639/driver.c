#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15751;
_Bool var_6 = (_Bool)0;
int var_10 = -1852373005;
int var_11 = -619635154;
int zero = 0;
signed char var_16 = (signed char)-17;
unsigned int var_17 = 3852746488U;
int var_18 = 769914326;
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
