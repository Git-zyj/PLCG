#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50685;
int var_2 = 1854684497;
short var_4 = (short)27474;
unsigned int var_6 = 69582751U;
int var_15 = 589979694;
int zero = 0;
signed char var_18 = (signed char)-90;
short var_19 = (short)-29487;
unsigned int var_20 = 1437785610U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
