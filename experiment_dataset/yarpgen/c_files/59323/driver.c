#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-20;
short var_5 = (short)1002;
signed char var_11 = (signed char)-63;
signed char var_17 = (signed char)66;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)63;
signed char var_21 = (signed char)62;
signed char var_22 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
