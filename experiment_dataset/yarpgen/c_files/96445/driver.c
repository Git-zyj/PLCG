#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1484366955;
signed char var_3 = (signed char)-125;
unsigned long long int var_4 = 11675819805163071063ULL;
_Bool var_7 = (_Bool)1;
short var_8 = (short)19813;
int zero = 0;
signed char var_10 = (signed char)-96;
long long int var_11 = 8249816783473374201LL;
int var_12 = -1118081400;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
