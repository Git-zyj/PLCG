#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-116;
long long int var_2 = -709176905221194651LL;
short var_9 = (short)-5193;
unsigned int var_15 = 3330633257U;
int zero = 0;
unsigned int var_20 = 338476738U;
unsigned char var_21 = (unsigned char)196;
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
