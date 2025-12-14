#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_4 = 1610296743;
short var_6 = (short)6381;
unsigned long long int var_11 = 8414401932231198528ULL;
unsigned long long int var_14 = 10404327779730807405ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_18 = 487009856;
int var_19 = -859773990;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-48;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
