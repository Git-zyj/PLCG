#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-20;
signed char var_7 = (signed char)112;
int var_11 = 326471748;
signed char var_12 = (signed char)120;
_Bool var_16 = (_Bool)1;
long long int var_19 = 3153935085145157341LL;
int zero = 0;
signed char var_20 = (signed char)25;
int var_21 = 542166951;
int var_22 = 1715436685;
void init() {
}

void checksum() {
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
