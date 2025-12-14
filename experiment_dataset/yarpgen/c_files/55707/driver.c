#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64750;
unsigned char var_1 = (unsigned char)88;
short var_5 = (short)-9772;
long long int var_9 = -7519258696473666096LL;
signed char var_14 = (signed char)-118;
unsigned char var_16 = (unsigned char)30;
int zero = 0;
short var_19 = (short)30536;
signed char var_20 = (signed char)108;
int var_21 = 341837052;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
