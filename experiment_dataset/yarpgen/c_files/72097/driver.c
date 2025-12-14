#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3813560110U;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-53;
unsigned long long int var_6 = 15493157149648205169ULL;
short var_8 = (short)21723;
short var_10 = (short)12313;
int zero = 0;
unsigned short var_11 = (unsigned short)48777;
short var_12 = (short)10157;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
