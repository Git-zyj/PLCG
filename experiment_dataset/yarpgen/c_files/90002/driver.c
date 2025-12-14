#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -585777896;
short var_9 = (short)29885;
unsigned long long int var_11 = 10233609065654363576ULL;
unsigned char var_13 = (unsigned char)86;
int zero = 0;
short var_14 = (short)-24725;
int var_15 = 1941975567;
unsigned char var_16 = (unsigned char)68;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
