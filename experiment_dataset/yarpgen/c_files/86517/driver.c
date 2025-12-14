#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 155734950U;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-821;
unsigned char var_6 = (unsigned char)101;
signed char var_9 = (signed char)-62;
int zero = 0;
unsigned char var_12 = (unsigned char)153;
int var_13 = 1001688281;
long long int var_14 = 6727000900006898490LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 1959760355U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
