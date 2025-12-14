#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27679;
short var_4 = (short)11153;
unsigned int var_5 = 1855091332U;
unsigned short var_6 = (unsigned short)55257;
unsigned int var_7 = 4168221907U;
signed char var_8 = (signed char)101;
signed char var_9 = (signed char)-24;
int zero = 0;
unsigned int var_11 = 2567552544U;
short var_12 = (short)-25394;
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
