#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -420668507;
_Bool var_8 = (_Bool)1;
int var_11 = 794452763;
int zero = 0;
long long int var_13 = -1294022987453904033LL;
long long int var_14 = 5175100357215736153LL;
void init() {
}

void checksum() {
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
