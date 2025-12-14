#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6854580468002426463LL;
signed char var_3 = (signed char)-95;
signed char var_7 = (signed char)-63;
short var_8 = (short)-11216;
int zero = 0;
signed char var_15 = (signed char)58;
signed char var_16 = (signed char)53;
unsigned long long int var_17 = 13113179670047357189ULL;
void init() {
}

void checksum() {
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
