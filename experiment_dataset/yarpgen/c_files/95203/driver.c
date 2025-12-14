#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1335884581;
_Bool var_3 = (_Bool)1;
signed char var_11 = (signed char)85;
long long int var_15 = -7199513182851601817LL;
signed char var_16 = (signed char)120;
int zero = 0;
int var_20 = -1194590879;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-97;
unsigned short var_23 = (unsigned short)28210;
void init() {
}

void checksum() {
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
