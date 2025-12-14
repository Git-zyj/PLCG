#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1611268791U;
unsigned int var_4 = 1167355370U;
unsigned int var_8 = 601336960U;
unsigned int var_9 = 1772981400U;
unsigned int var_10 = 2527650310U;
unsigned int var_11 = 4225679839U;
int zero = 0;
unsigned int var_14 = 1332887978U;
unsigned int var_15 = 3731296403U;
void init() {
}

void checksum() {
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
