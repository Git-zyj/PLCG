#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 5303599550780776481LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)28469;
int zero = 0;
short var_15 = (short)-25828;
unsigned long long int var_16 = 15538939043758657797ULL;
signed char var_17 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
