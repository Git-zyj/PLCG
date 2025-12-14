#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)238;
unsigned int var_8 = 125964700U;
short var_12 = (short)-14580;
signed char var_14 = (signed char)-117;
int zero = 0;
unsigned short var_17 = (unsigned short)30898;
unsigned int var_18 = 2171809527U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
