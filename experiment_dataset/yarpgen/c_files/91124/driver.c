#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1937923483;
short var_2 = (short)-24900;
unsigned long long int var_12 = 11475567582861990717ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = 574845659;
long long int var_16 = -7140471592207201578LL;
void init() {
}

void checksum() {
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
