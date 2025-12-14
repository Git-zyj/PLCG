#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1064014111U;
unsigned int var_12 = 1061277958U;
signed char var_14 = (signed char)87;
int zero = 0;
unsigned long long int var_17 = 492826484750199452ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-55;
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
