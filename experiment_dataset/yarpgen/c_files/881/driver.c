#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)107;
long long int var_11 = -3670664267183014542LL;
int zero = 0;
unsigned long long int var_18 = 12237022002736317079ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 17955621349999914798ULL;
void init() {
}

void checksum() {
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
