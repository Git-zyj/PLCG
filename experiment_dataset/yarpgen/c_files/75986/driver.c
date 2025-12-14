#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1426298515U;
short var_5 = (short)670;
unsigned long long int var_10 = 15636885090409455320ULL;
short var_12 = (short)15809;
unsigned long long int var_13 = 834405825493975516ULL;
int zero = 0;
long long int var_15 = 2645265494125780440LL;
short var_16 = (short)18698;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
