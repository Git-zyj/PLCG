#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -38856414;
signed char var_6 = (signed char)-5;
_Bool var_8 = (_Bool)1;
int var_10 = 697402516;
signed char var_16 = (signed char)7;
unsigned long long int var_18 = 14486231872101312070ULL;
int zero = 0;
short var_20 = (short)28239;
signed char var_21 = (signed char)124;
void init() {
}

void checksum() {
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
