#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4117162831U;
int var_3 = -387644082;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)32384;
signed char var_8 = (signed char)40;
unsigned int var_9 = 3483140331U;
short var_10 = (short)-5009;
unsigned short var_11 = (unsigned short)16115;
int var_13 = 1085441930;
int zero = 0;
signed char var_15 = (signed char)-86;
unsigned long long int var_16 = 10495084972710646175ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
