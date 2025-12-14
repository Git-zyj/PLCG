#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1567369390;
short var_3 = (short)5767;
unsigned long long int var_6 = 9790869841836423200ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)18650;
unsigned int var_20 = 1932878386U;
short var_21 = (short)-2010;
short var_22 = (short)8599;
short var_23 = (short)28515;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
