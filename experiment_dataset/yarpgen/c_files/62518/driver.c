#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2044866017;
_Bool var_3 = (_Bool)0;
long long int var_12 = 6193853016839617827LL;
short var_14 = (short)-2669;
int zero = 0;
unsigned long long int var_15 = 2954130180077593694ULL;
int var_16 = -2104609361;
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
