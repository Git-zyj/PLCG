#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8493832243775585263ULL;
long long int var_3 = -3934129353886784130LL;
unsigned long long int var_4 = 2199511265118158577ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_13 = 945563940U;
unsigned short var_15 = (unsigned short)19449;
long long int var_17 = -6632509579580941954LL;
int zero = 0;
unsigned long long int var_19 = 6777953454688000483ULL;
unsigned short var_20 = (unsigned short)60575;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
