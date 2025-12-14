#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19687;
signed char var_2 = (signed char)-88;
unsigned long long int var_4 = 9541844677848078410ULL;
unsigned long long int var_5 = 8110339237517433980ULL;
int var_6 = -487823212;
unsigned long long int var_7 = 5708768030425805217ULL;
unsigned long long int var_9 = 10024985086345956353ULL;
int zero = 0;
unsigned long long int var_15 = 17975112276272373275ULL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)35;
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
