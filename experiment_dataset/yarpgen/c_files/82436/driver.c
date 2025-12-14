#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)120;
short var_1 = (short)7733;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2661086847U;
signed char var_6 = (signed char)32;
signed char var_11 = (signed char)-41;
int zero = 0;
long long int var_13 = -569960200255227925LL;
unsigned long long int var_14 = 7520584954977326158ULL;
void init() {
}

void checksum() {
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
