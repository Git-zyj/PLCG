#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)1;
unsigned short var_10 = (unsigned short)32019;
signed char var_11 = (signed char)-36;
short var_15 = (short)-20448;
long long int var_17 = 5387035567209048125LL;
signed char var_18 = (signed char)45;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3634104992236883076LL;
short var_22 = (short)4403;
void init() {
}

void checksum() {
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
