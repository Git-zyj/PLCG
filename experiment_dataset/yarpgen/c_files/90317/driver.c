#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)41083;
short var_5 = (short)14384;
_Bool var_6 = (_Bool)1;
long long int var_11 = -6414559369686591628LL;
int zero = 0;
unsigned char var_13 = (unsigned char)172;
long long int var_14 = -410303727795839626LL;
unsigned int var_15 = 1051358975U;
void init() {
}

void checksum() {
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
