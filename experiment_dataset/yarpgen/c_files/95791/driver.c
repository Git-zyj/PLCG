#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5232356483501628499LL;
long long int var_2 = 6679692534914478355LL;
_Bool var_7 = (_Bool)1;
unsigned int var_13 = 2071379293U;
unsigned int var_14 = 1885807014U;
int zero = 0;
int var_19 = -432474423;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
