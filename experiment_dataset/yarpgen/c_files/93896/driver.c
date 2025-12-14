#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 14623693685697424166ULL;
_Bool var_6 = (_Bool)0;
short var_10 = (short)29897;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3281375713431207676ULL;
unsigned long long int var_13 = 601874228363105100ULL;
short var_14 = (short)7560;
short var_15 = (short)1897;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
