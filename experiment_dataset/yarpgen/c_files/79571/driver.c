#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1277400612U;
int var_5 = -92732251;
int var_6 = -1034862454;
int var_10 = 367521464;
short var_12 = (short)-30510;
int zero = 0;
int var_17 = -1181631345;
int var_18 = 1730263828;
int var_19 = 575020489;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
