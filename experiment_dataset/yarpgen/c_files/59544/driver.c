#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)79;
short var_7 = (short)-1479;
short var_8 = (short)-29623;
unsigned long long int var_11 = 10499869222016210372ULL;
unsigned int var_12 = 3031725229U;
int zero = 0;
unsigned long long int var_15 = 300959141106104371ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-24995;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
