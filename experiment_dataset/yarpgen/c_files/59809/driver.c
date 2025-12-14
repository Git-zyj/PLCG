#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_11 = 496955907;
unsigned short var_14 = (unsigned short)20034;
int zero = 0;
short var_17 = (short)58;
unsigned short var_18 = (unsigned short)59718;
signed char var_19 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
