#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4194538408U;
unsigned char var_2 = (unsigned char)168;
unsigned int var_4 = 2739210524U;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
short var_10 = (short)-6568;
long long int var_11 = 3108153430290017360LL;
int var_12 = -2015842346;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
