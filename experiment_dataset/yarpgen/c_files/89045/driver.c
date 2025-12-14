#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-6209;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)39;
unsigned long long int var_12 = 14483823751106430047ULL;
long long int var_13 = -1936142381048527298LL;
int var_14 = 393645087;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
