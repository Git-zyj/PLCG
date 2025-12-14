#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9561;
unsigned long long int var_4 = 2000946712823130835ULL;
short var_8 = (short)26892;
unsigned short var_9 = (unsigned short)59804;
short var_12 = (short)-23485;
int zero = 0;
unsigned short var_16 = (unsigned short)40616;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 8489718439989829834ULL;
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
