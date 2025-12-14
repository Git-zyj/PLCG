#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_6 = 12581759280459067791ULL;
long long int var_9 = -4615551108206584252LL;
int zero = 0;
int var_10 = 1105090732;
long long int var_11 = -7868677972372879487LL;
int var_12 = -1821251379;
unsigned int var_13 = 3679504664U;
int var_14 = 1295094083;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
