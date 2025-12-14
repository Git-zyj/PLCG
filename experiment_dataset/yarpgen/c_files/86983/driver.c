#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-8;
unsigned int var_8 = 3890528470U;
signed char var_12 = (signed char)-113;
unsigned int var_13 = 2583820484U;
int zero = 0;
unsigned int var_20 = 2961304691U;
unsigned short var_21 = (unsigned short)25910;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
