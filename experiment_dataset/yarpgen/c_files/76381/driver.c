#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1694974245;
signed char var_3 = (signed char)-23;
short var_7 = (short)-28944;
_Bool var_8 = (_Bool)0;
long long int var_13 = -2762504330779798210LL;
long long int var_14 = -6861101393621791006LL;
int zero = 0;
long long int var_16 = 7031181981100819399LL;
_Bool var_17 = (_Bool)0;
long long int var_18 = -8664165351436342036LL;
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
