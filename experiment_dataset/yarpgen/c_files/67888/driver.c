#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7806174286276304636LL;
_Bool var_8 = (_Bool)0;
int var_14 = -1703124295;
int zero = 0;
int var_15 = 1296363000;
long long int var_16 = 8975202109664381840LL;
unsigned long long int var_17 = 7451562250242274734ULL;
signed char var_18 = (signed char)-44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
