#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
signed char var_4 = (signed char)83;
short var_5 = (short)-20111;
short var_8 = (short)19422;
int zero = 0;
unsigned int var_12 = 1413269040U;
short var_13 = (short)-9257;
signed char var_14 = (signed char)100;
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
