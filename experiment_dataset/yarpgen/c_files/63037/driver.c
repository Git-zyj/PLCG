#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7450037254052520464LL;
int var_11 = 1742992371;
signed char var_12 = (signed char)64;
_Bool var_15 = (_Bool)1;
unsigned long long int var_17 = 16068027020435837983ULL;
int zero = 0;
int var_19 = -137335298;
int var_20 = 1664358438;
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
