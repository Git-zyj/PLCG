#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32410;
signed char var_2 = (signed char)-82;
int var_11 = 1678248445;
short var_12 = (short)5366;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)59106;
long long int var_21 = 3188004653550363221LL;
unsigned int var_22 = 2955317254U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
