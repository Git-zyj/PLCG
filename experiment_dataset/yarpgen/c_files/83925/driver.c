#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 2009384367296920371ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 5002353631139549454ULL;
short var_11 = (short)16927;
int zero = 0;
int var_12 = -1146759311;
long long int var_13 = -8675996250453460399LL;
int var_14 = 894259056;
void init() {
}

void checksum() {
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
