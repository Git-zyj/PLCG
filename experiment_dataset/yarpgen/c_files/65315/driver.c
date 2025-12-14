#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1332421311;
unsigned int var_4 = 3953136449U;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)39229;
long long int var_11 = -5418308902513683787LL;
long long int var_12 = -3946581301437585027LL;
int zero = 0;
unsigned int var_13 = 368729056U;
signed char var_14 = (signed char)-89;
signed char var_15 = (signed char)119;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
