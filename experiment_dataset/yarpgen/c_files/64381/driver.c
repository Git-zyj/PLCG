#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11043;
unsigned long long int var_10 = 8460538428127517487ULL;
int zero = 0;
signed char var_14 = (signed char)-15;
long long int var_15 = -5364277374109223523LL;
short var_16 = (short)-19691;
short var_17 = (short)2226;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
