#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1604560719U;
unsigned long long int var_2 = 10274733937739160491ULL;
unsigned int var_3 = 3064216181U;
short var_4 = (short)21103;
short var_6 = (short)-464;
long long int var_7 = 7310606595343034077LL;
short var_8 = (short)32502;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -8526661311265748058LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
