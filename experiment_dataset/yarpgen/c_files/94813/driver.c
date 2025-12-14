#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1797262836;
unsigned int var_8 = 3417063968U;
short var_10 = (short)32398;
unsigned long long int var_12 = 14420666117461050996ULL;
int zero = 0;
long long int var_17 = 4564778973163542960LL;
unsigned int var_18 = 3097820534U;
_Bool var_19 = (_Bool)0;
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
