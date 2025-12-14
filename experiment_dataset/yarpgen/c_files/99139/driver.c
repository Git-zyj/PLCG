#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10221428314696180819ULL;
unsigned short var_11 = (unsigned short)31861;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8588420794832139767LL;
unsigned long long int var_21 = 16198970419865156603ULL;
int var_22 = -824328415;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
