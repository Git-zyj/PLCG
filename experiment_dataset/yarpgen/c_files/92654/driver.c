#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33932;
unsigned long long int var_4 = 16861575148976266668ULL;
unsigned short var_15 = (unsigned short)55992;
int zero = 0;
unsigned long long int var_20 = 9796397719642490696ULL;
signed char var_21 = (signed char)111;
short var_22 = (short)9725;
short var_23 = (short)-15620;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
