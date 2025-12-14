#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-21771;
int var_8 = 861267317;
_Bool var_13 = (_Bool)1;
signed char var_18 = (signed char)-88;
int zero = 0;
signed char var_19 = (signed char)-85;
short var_20 = (short)25052;
signed char var_21 = (signed char)40;
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
