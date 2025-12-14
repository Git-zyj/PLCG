#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 26297936821360378ULL;
signed char var_7 = (signed char)4;
long long int var_8 = 2399560139761499544LL;
int zero = 0;
int var_12 = -715367258;
_Bool var_13 = (_Bool)0;
long long int var_14 = -356839494035326437LL;
int var_15 = -532139148;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
