#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3158080822U;
int var_7 = 973602112;
_Bool var_9 = (_Bool)0;
unsigned int var_15 = 232824076U;
unsigned int var_17 = 2721778583U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -38207149;
int var_22 = 1992547749;
unsigned int var_23 = 1979614378U;
int var_24 = 105927685;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
