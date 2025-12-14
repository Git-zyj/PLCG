#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23647;
long long int var_1 = -8674504818169175032LL;
unsigned char var_10 = (unsigned char)193;
int var_11 = 1960872441;
int zero = 0;
unsigned int var_12 = 1024521326U;
long long int var_13 = 7301593249478304091LL;
void init() {
}

void checksum() {
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
