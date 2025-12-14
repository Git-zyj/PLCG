#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6584;
long long int var_11 = -7130243834935158008LL;
unsigned int var_13 = 1835976505U;
unsigned int var_15 = 3322085776U;
_Bool var_17 = (_Bool)0;
unsigned int var_19 = 998633891U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1381406375U;
long long int var_22 = -5423189344779589105LL;
_Bool var_23 = (_Bool)0;
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
