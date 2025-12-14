#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned char var_5 = (unsigned char)182;
unsigned short var_6 = (unsigned short)35422;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)73;
int zero = 0;
unsigned short var_13 = (unsigned short)1482;
unsigned short var_14 = (unsigned short)21351;
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
