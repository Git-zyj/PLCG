#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7970929134521158179LL;
signed char var_7 = (signed char)-99;
short var_9 = (short)7810;
int zero = 0;
unsigned char var_11 = (unsigned char)28;
signed char var_12 = (signed char)85;
void init() {
}

void checksum() {
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
