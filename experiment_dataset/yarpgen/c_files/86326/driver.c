#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3383687707U;
signed char var_1 = (signed char)79;
unsigned int var_3 = 3513707561U;
short var_6 = (short)8369;
signed char var_7 = (signed char)-84;
long long int var_10 = 3895613976876050095LL;
int zero = 0;
long long int var_12 = -8131623569710561049LL;
long long int var_13 = -8712923434975693378LL;
unsigned int var_14 = 2676727663U;
unsigned int var_15 = 3424625559U;
short var_16 = (short)21346;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
