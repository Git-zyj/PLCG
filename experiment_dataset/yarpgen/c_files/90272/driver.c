#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1834966583U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
long long int var_4 = -1910859937135511233LL;
unsigned int var_7 = 1566203858U;
unsigned long long int var_8 = 18090128935580879050ULL;
long long int var_13 = -5202555700919924808LL;
int zero = 0;
unsigned char var_14 = (unsigned char)105;
short var_15 = (short)12702;
unsigned int var_16 = 2811916909U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
