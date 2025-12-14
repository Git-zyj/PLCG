#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41500;
short var_2 = (short)8972;
signed char var_6 = (signed char)46;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1432378775;
signed char var_12 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
