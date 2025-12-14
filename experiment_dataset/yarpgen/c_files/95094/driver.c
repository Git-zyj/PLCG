#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)12609;
short var_4 = (short)-31041;
unsigned int var_6 = 2298489063U;
unsigned long long int var_10 = 12382641125213452298ULL;
unsigned short var_12 = (unsigned short)52917;
int zero = 0;
long long int var_14 = -1141597872069031212LL;
unsigned short var_15 = (unsigned short)265;
long long int var_16 = -2884789754650191848LL;
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
