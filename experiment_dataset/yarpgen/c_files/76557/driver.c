#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-36;
unsigned long long int var_6 = 10245394829737731126ULL;
_Bool var_8 = (_Bool)0;
signed char var_12 = (signed char)109;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)17341;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
