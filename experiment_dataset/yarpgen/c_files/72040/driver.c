#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1461703097;
_Bool var_4 = (_Bool)0;
short var_8 = (short)6165;
unsigned long long int var_10 = 5543276517622238366ULL;
int zero = 0;
unsigned long long int var_13 = 4552183859133303010ULL;
short var_14 = (short)-4922;
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
