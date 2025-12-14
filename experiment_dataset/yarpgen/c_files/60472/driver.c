#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11760507375973765181ULL;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 18378321717451026774ULL;
unsigned long long int var_8 = 11963457259094658651ULL;
short var_13 = (short)-4502;
int zero = 0;
unsigned long long int var_14 = 3435539734090987177ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
