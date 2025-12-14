#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1370090032U;
unsigned long long int var_4 = 12934671142815367498ULL;
signed char var_8 = (signed char)-15;
long long int var_11 = 1629539549271692061LL;
int zero = 0;
unsigned long long int var_12 = 9854104805088316939ULL;
short var_13 = (short)22466;
void init() {
}

void checksum() {
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
