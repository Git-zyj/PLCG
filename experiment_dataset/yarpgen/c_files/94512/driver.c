#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 459072101U;
long long int var_5 = -7139327724305473778LL;
unsigned int var_6 = 833273990U;
unsigned int var_8 = 3707333847U;
long long int var_9 = 5089775258551492379LL;
unsigned short var_11 = (unsigned short)52653;
int zero = 0;
long long int var_14 = 6330206013562746950LL;
unsigned short var_15 = (unsigned short)54924;
long long int var_16 = -8392544187201582992LL;
signed char var_17 = (signed char)-47;
unsigned int var_18 = 1599314320U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
