#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2417460040U;
long long int var_3 = -8262595270141863281LL;
signed char var_10 = (signed char)-75;
long long int var_13 = -3391432734837781208LL;
int zero = 0;
short var_15 = (short)20939;
long long int var_16 = -2936763172869388419LL;
signed char var_17 = (signed char)-10;
short var_18 = (short)-26661;
void init() {
}

void checksum() {
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
