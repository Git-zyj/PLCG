#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -647506286;
signed char var_7 = (signed char)11;
int zero = 0;
unsigned int var_13 = 3378358138U;
unsigned char var_14 = (unsigned char)59;
unsigned long long int var_15 = 1495406409395889132ULL;
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
