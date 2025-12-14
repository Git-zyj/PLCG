#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2658905052U;
signed char var_1 = (signed char)-124;
signed char var_2 = (signed char)-113;
signed char var_4 = (signed char)-93;
short var_7 = (short)25775;
int zero = 0;
unsigned long long int var_10 = 11422757612430650606ULL;
short var_11 = (short)26412;
unsigned char var_12 = (unsigned char)80;
unsigned int var_13 = 1213006891U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
