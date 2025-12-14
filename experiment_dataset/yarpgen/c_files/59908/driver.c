#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3255755372U;
unsigned int var_7 = 4094699161U;
unsigned int var_8 = 4076937664U;
unsigned int var_10 = 2720305601U;
unsigned int var_12 = 3649832428U;
unsigned int var_15 = 265327611U;
int zero = 0;
unsigned int var_19 = 308713264U;
unsigned int var_20 = 109181958U;
unsigned int var_21 = 4174257153U;
unsigned int var_22 = 3815244242U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
