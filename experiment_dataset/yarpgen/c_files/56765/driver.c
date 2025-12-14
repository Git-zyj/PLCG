#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned char var_1 = (unsigned char)234;
unsigned int var_3 = 3220534438U;
unsigned short var_4 = (unsigned short)63414;
unsigned short var_5 = (unsigned short)38621;
long long int var_6 = -8352711292642246309LL;
unsigned short var_7 = (unsigned short)55878;
int zero = 0;
short var_12 = (short)31388;
int var_13 = -1001674939;
long long int var_14 = 7402528815048976745LL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
