#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5386655463147452410ULL;
unsigned int var_2 = 1386929757U;
short var_8 = (short)27900;
unsigned long long int var_12 = 5225569212366785554ULL;
unsigned int var_17 = 520871392U;
int zero = 0;
long long int var_19 = 2024480512544416111LL;
int var_20 = 1012458060;
unsigned int var_21 = 4008739875U;
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
