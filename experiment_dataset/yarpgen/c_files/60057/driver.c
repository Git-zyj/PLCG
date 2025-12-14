#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1328893803;
int var_5 = -48714303;
unsigned long long int var_10 = 551903284814162532ULL;
long long int var_17 = -5135410814546436116LL;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -293462245;
unsigned long long int var_22 = 2900644353864762205ULL;
short var_23 = (short)-16078;
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
