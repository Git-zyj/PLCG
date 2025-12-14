#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12704373055830310036ULL;
long long int var_1 = -874450483246804564LL;
short var_2 = (short)-24507;
short var_4 = (short)27412;
_Bool var_6 = (_Bool)1;
int var_7 = -1708482724;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)-25;
int zero = 0;
int var_13 = 1685684504;
signed char var_14 = (signed char)-87;
int var_15 = -868109428;
unsigned int var_16 = 4181695618U;
void init() {
}

void checksum() {
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
