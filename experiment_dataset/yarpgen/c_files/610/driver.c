#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -890266886;
signed char var_4 = (signed char)122;
signed char var_5 = (signed char)67;
long long int var_6 = -5579065051561623584LL;
unsigned short var_7 = (unsigned short)59688;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 16562694810593294949ULL;
int zero = 0;
signed char var_11 = (signed char)37;
unsigned long long int var_12 = 12557137453350561161ULL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
