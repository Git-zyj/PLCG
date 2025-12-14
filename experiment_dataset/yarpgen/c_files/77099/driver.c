#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)105;
unsigned long long int var_5 = 7887429893967160309ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_17 = -8167751582914425963LL;
long long int var_18 = -6297646841176237484LL;
signed char var_19 = (signed char)-116;
unsigned char var_20 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
