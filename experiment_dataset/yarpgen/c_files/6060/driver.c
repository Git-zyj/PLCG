#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -5023356787425550461LL;
unsigned short var_6 = (unsigned short)5497;
short var_16 = (short)-27113;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 12823895239854893784ULL;
short var_20 = (short)-5578;
unsigned short var_21 = (unsigned short)33284;
void init() {
}

void checksum() {
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
