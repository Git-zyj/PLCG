#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 8586165100588312383ULL;
signed char var_5 = (signed char)-41;
unsigned short var_9 = (unsigned short)17710;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)-11462;
long long int var_14 = 6303699605930024091LL;
int var_15 = 2098915949;
short var_16 = (short)12955;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
