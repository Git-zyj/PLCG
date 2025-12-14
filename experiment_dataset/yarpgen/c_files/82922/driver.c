#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37516;
unsigned int var_10 = 1267035628U;
short var_15 = (short)-31861;
signed char var_17 = (signed char)72;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 1639515703;
signed char var_20 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
