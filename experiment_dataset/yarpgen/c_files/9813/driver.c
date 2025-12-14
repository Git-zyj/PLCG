#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1838788262696073886ULL;
signed char var_3 = (signed char)74;
signed char var_7 = (signed char)-22;
unsigned short var_11 = (unsigned short)52260;
int zero = 0;
signed char var_13 = (signed char)-100;
long long int var_14 = -104732887765247357LL;
unsigned short var_15 = (unsigned short)46888;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
