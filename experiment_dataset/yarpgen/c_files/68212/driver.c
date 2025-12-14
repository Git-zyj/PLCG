#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1511217730;
_Bool var_5 = (_Bool)1;
long long int var_8 = 701158186226385646LL;
short var_10 = (short)-5236;
int zero = 0;
unsigned short var_17 = (unsigned short)18622;
unsigned char var_18 = (unsigned char)73;
int var_19 = -1663501673;
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
