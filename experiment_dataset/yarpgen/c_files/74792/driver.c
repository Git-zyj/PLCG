#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1521419713U;
unsigned int var_8 = 98332860U;
unsigned int var_11 = 992588933U;
unsigned int var_12 = 3782415897U;
unsigned long long int var_19 = 16645149042747708952ULL;
int zero = 0;
short var_20 = (short)30621;
_Bool var_21 = (_Bool)0;
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
