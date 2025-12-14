#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)9739;
short var_10 = (short)19323;
short var_12 = (short)-1724;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 15074861848297473391ULL;
int zero = 0;
unsigned int var_18 = 206852977U;
unsigned long long int var_19 = 11098187675012139901ULL;
unsigned int var_20 = 3631129702U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
