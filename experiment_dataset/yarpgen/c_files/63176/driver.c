#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6545522124887856778LL;
signed char var_3 = (signed char)35;
unsigned int var_5 = 2087986114U;
unsigned int var_6 = 3275452531U;
long long int var_7 = -203354274959174299LL;
unsigned int var_9 = 177063771U;
unsigned char var_11 = (unsigned char)76;
signed char var_12 = (signed char)111;
int zero = 0;
unsigned char var_14 = (unsigned char)40;
unsigned char var_15 = (unsigned char)37;
long long int var_16 = 4700067014968510473LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
