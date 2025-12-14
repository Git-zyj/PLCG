#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1833019034;
long long int var_2 = 1240853005482477328LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 13686966718525578700ULL;
int var_7 = -767784795;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 10055170680681302577ULL;
int zero = 0;
long long int var_10 = 6883066850182856076LL;
signed char var_11 = (signed char)-75;
int var_12 = -212337312;
unsigned char var_13 = (unsigned char)164;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
