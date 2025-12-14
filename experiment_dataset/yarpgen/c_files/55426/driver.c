#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)68;
short var_6 = (short)-18907;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 7864618026412382851ULL;
unsigned long long int var_14 = 10438844403078100862ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)4474;
unsigned long long int var_18 = 4132288852595342836ULL;
int var_19 = 1614416595;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
