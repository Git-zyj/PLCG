#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 857562373619468116LL;
unsigned int var_4 = 2287571034U;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)53;
unsigned long long int var_10 = 3901278686158112042ULL;
int zero = 0;
int var_12 = 1627100185;
unsigned long long int var_13 = 14375136453514445632ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
