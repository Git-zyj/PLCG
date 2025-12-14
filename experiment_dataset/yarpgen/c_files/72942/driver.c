#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5977024996918742056LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6562030143584205291ULL;
short var_11 = (short)26964;
int zero = 0;
short var_15 = (short)-22744;
unsigned short var_16 = (unsigned short)58022;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
