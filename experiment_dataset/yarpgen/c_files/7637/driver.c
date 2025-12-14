#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-23;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1134751245U;
short var_7 = (short)-359;
unsigned short var_13 = (unsigned short)53138;
int zero = 0;
long long int var_16 = 2969901759342938826LL;
int var_17 = 1968292087;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
