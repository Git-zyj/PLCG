#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5556919708269066919LL;
unsigned int var_3 = 44408988U;
long long int var_4 = -3422442499062196818LL;
long long int var_5 = 4753395667116490010LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 4099002420510112718ULL;
int zero = 0;
signed char var_11 = (signed char)-70;
signed char var_12 = (signed char)-58;
short var_13 = (short)10190;
long long int var_14 = -8307343286182161515LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
