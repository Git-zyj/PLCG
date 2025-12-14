#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -1215470642514765535LL;
unsigned short var_15 = (unsigned short)29749;
unsigned short var_18 = (unsigned short)49895;
int zero = 0;
short var_20 = (short)-23712;
unsigned int var_21 = 3344499880U;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
