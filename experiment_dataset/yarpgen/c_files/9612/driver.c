#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)9;
int var_3 = -1144517217;
signed char var_4 = (signed char)56;
int var_8 = -192934452;
signed char var_10 = (signed char)97;
int zero = 0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)1;
signed char var_13 = (signed char)-97;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
