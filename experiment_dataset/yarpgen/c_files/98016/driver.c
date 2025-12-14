#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 93306845290540582ULL;
int var_2 = 1381994003;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)1;
int zero = 0;
long long int var_16 = 728229769120253540LL;
unsigned int var_17 = 2767482157U;
unsigned short var_18 = (unsigned short)65310;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
