#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 573512084U;
unsigned long long int var_8 = 12673131875200157588ULL;
unsigned short var_13 = (unsigned short)17414;
unsigned long long int var_14 = 2124596110665667796ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = -8822934821168055612LL;
short var_17 = (short)-4827;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
