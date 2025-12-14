#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2204763318U;
short var_7 = (short)20208;
long long int var_9 = 6421221483408749026LL;
long long int var_14 = -6650663297205884337LL;
int zero = 0;
long long int var_15 = 4615582733790090883LL;
unsigned int var_16 = 1008028569U;
signed char var_17 = (signed char)34;
long long int var_18 = 3905466451262222027LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
