#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 4597773746298323835ULL;
unsigned long long int var_8 = 14920688434818867051ULL;
long long int var_11 = -1031729491864165865LL;
unsigned int var_15 = 1054486555U;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)11258;
unsigned long long int var_19 = 2779021697119925637ULL;
unsigned char var_20 = (unsigned char)104;
unsigned int var_21 = 3258706581U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
