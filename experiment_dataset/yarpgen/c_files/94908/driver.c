#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 253446115;
signed char var_15 = (signed char)81;
int zero = 0;
long long int var_19 = -8790948336315523004LL;
signed char var_20 = (signed char)116;
unsigned short var_21 = (unsigned short)64259;
int var_22 = 1714514730;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
