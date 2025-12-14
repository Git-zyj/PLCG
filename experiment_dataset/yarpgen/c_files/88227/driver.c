#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-6105;
unsigned long long int var_2 = 4683145437404561247ULL;
unsigned long long int var_4 = 10597213197299571001ULL;
long long int var_7 = 9071981364629809457LL;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 15586764580003749651ULL;
unsigned short var_13 = (unsigned short)47984;
int zero = 0;
long long int var_15 = 1356670364703280204LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)9910;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
