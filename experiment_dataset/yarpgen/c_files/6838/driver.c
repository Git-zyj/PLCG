#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)60068;
int var_14 = 871130350;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)59464;
unsigned short var_20 = (unsigned short)30937;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 15509446958543691910ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
