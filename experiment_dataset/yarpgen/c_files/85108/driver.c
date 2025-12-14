#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)178;
short var_8 = (short)18936;
int zero = 0;
signed char var_12 = (signed char)-19;
unsigned int var_13 = 761887165U;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-30;
unsigned long long int var_16 = 9092506081871630207ULL;
short var_17 = (short)32659;
unsigned char var_18 = (unsigned char)150;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
