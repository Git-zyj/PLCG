#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
signed char var_1 = (signed char)79;
int var_2 = 27989126;
long long int var_4 = -6474746794413939109LL;
_Bool var_6 = (_Bool)1;
int var_11 = -1313103405;
int zero = 0;
int var_12 = 175497102;
int var_13 = 1768984090;
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
