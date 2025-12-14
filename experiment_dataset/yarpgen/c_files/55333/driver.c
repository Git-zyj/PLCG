#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 854238158U;
short var_9 = (short)-24953;
unsigned int var_10 = 2487778452U;
int zero = 0;
unsigned char var_11 = (unsigned char)128;
unsigned long long int var_12 = 16424481192960167659ULL;
unsigned int var_13 = 3151899907U;
unsigned short var_14 = (unsigned short)8794;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
