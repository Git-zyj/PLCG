#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7717635004308505126LL;
unsigned int var_2 = 2029790283U;
unsigned int var_12 = 1355339824U;
int var_15 = -1720078750;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-21017;
long long int var_19 = 3682843505013776335LL;
long long int var_20 = -5318422447787665048LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
