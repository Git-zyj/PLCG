#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
short var_9 = (short)32660;
short var_10 = (short)22245;
unsigned long long int var_11 = 14545354809231087937ULL;
unsigned long long int var_14 = 13243936225256337189ULL;
long long int var_15 = 4538193582792928022LL;
unsigned long long int var_18 = 11070185930380680093ULL;
int zero = 0;
signed char var_19 = (signed char)-107;
unsigned int var_20 = 845419522U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
