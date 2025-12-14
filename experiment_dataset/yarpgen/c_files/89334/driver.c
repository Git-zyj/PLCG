#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9723050489351905071ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_14 = (short)6345;
unsigned int var_15 = 1154611527U;
signed char var_16 = (signed char)-120;
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
