#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)133;
long long int var_3 = -5617246169976447913LL;
unsigned int var_5 = 2104342181U;
unsigned char var_6 = (unsigned char)244;
unsigned long long int var_7 = 13722757055173178777ULL;
unsigned char var_8 = (unsigned char)102;
signed char var_12 = (signed char)-17;
int zero = 0;
unsigned int var_14 = 758612679U;
int var_15 = -699728393;
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
