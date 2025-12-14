#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-64;
int var_10 = 1799988816;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)33;
long long int var_14 = 6477644195033029792LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_18 = (short)1936;
unsigned long long int var_19 = 7091795944084671118ULL;
unsigned long long int var_20 = 627834367579929664ULL;
int var_21 = -1816337937;
unsigned int var_22 = 745571614U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
