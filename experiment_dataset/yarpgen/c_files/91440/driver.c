#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -268203410;
unsigned long long int var_3 = 10442184276485871322ULL;
long long int var_4 = -3951055707231649114LL;
unsigned int var_6 = 4161824283U;
unsigned short var_8 = (unsigned short)15686;
unsigned int var_10 = 1367056181U;
int zero = 0;
signed char var_12 = (signed char)79;
short var_13 = (short)-3871;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)53301;
unsigned long long int var_16 = 12185484937223500315ULL;
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
