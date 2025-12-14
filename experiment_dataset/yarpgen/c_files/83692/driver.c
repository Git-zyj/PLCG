#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2714701103112877860LL;
int var_2 = 1996061214;
unsigned int var_4 = 74978806U;
signed char var_7 = (signed char)101;
unsigned int var_10 = 1752824374U;
int zero = 0;
unsigned int var_12 = 1303491775U;
long long int var_13 = 9047897457683559091LL;
short var_14 = (short)-28744;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
