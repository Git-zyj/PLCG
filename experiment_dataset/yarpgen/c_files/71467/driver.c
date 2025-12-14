#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6742357927144865978LL;
signed char var_9 = (signed char)122;
unsigned long long int var_10 = 14989148399772891801ULL;
short var_11 = (short)-20327;
signed char var_12 = (signed char)26;
unsigned int var_15 = 2182266849U;
short var_18 = (short)-19085;
int zero = 0;
short var_19 = (short)18901;
_Bool var_20 = (_Bool)0;
long long int var_21 = -8585693847127961681LL;
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
