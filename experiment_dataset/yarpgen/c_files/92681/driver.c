#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11824064939929443614ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)58239;
short var_6 = (short)-2101;
unsigned long long int var_11 = 18437810153931998603ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-19194;
int var_18 = -656678970;
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
