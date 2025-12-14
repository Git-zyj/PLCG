#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25555;
long long int var_3 = -4530522296357463927LL;
int var_4 = 1709930963;
int var_8 = 102812829;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-100;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)47876;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
