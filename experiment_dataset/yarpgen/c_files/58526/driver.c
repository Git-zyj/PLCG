#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)32164;
unsigned short var_4 = (unsigned short)24207;
signed char var_12 = (signed char)9;
unsigned long long int var_16 = 10104456005038367833ULL;
int zero = 0;
signed char var_17 = (signed char)-100;
unsigned char var_18 = (unsigned char)51;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3866382580885638063LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
