#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
signed char var_2 = (signed char)-64;
unsigned short var_6 = (unsigned short)37187;
signed char var_7 = (signed char)-29;
int zero = 0;
signed char var_11 = (signed char)-88;
signed char var_12 = (signed char)-83;
_Bool var_13 = (_Bool)1;
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
