#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)53;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 977608887263834803ULL;
long long int var_17 = 3735944431944394330LL;
int zero = 0;
short var_19 = (short)-21927;
unsigned long long int var_20 = 17887883013356951887ULL;
unsigned long long int var_21 = 12668690896113311578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
