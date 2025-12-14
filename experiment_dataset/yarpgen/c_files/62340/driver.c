#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-69;
long long int var_13 = -3073326462181558168LL;
unsigned int var_16 = 820401196U;
int zero = 0;
unsigned short var_18 = (unsigned short)3130;
_Bool var_19 = (_Bool)1;
int var_20 = 100925874;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
