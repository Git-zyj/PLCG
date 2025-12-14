#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1473;
signed char var_1 = (signed char)-114;
unsigned int var_2 = 1353042224U;
unsigned char var_4 = (unsigned char)7;
unsigned int var_8 = 4200671577U;
unsigned long long int var_9 = 13123352722860873554ULL;
signed char var_10 = (signed char)-34;
unsigned long long int var_13 = 8184042148074683015ULL;
unsigned long long int var_14 = 13490778427771678104ULL;
int zero = 0;
signed char var_15 = (signed char)-63;
unsigned char var_16 = (unsigned char)241;
short var_17 = (short)2853;
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
