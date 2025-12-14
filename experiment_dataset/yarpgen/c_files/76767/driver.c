#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1831346247U;
unsigned int var_1 = 890557285U;
unsigned short var_2 = (unsigned short)27048;
unsigned short var_3 = (unsigned short)24873;
short var_4 = (short)7148;
unsigned short var_6 = (unsigned short)63427;
short var_7 = (short)736;
unsigned long long int var_8 = 13315321838092273759ULL;
signed char var_9 = (signed char)126;
int zero = 0;
unsigned long long int var_10 = 11674233268692514031ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)13070;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
