#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_11 = -447775133;
long long int var_14 = 5694863433521192409LL;
int zero = 0;
unsigned int var_15 = 1397605219U;
int var_16 = -678344406;
short var_17 = (short)14177;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
