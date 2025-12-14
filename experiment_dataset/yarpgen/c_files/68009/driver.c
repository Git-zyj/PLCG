#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-96;
unsigned long long int var_5 = 6716030073096075655ULL;
unsigned long long int var_6 = 1986749214504673036ULL;
signed char var_8 = (signed char)-114;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)122;
signed char var_11 = (signed char)34;
signed char var_12 = (signed char)46;
signed char var_13 = (signed char)41;
signed char var_15 = (signed char)-81;
signed char var_16 = (signed char)15;
int zero = 0;
unsigned long long int var_17 = 479821325101043946ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
