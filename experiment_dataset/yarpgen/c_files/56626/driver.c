#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10046253545783459919ULL;
signed char var_5 = (signed char)-42;
unsigned int var_6 = 147302123U;
signed char var_8 = (signed char)38;
unsigned long long int var_10 = 7129699828022607870ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)50757;
short var_13 = (short)-17560;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
