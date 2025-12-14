#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)119;
unsigned short var_6 = (unsigned short)9829;
unsigned int var_7 = 1909486068U;
unsigned short var_9 = (unsigned short)44278;
unsigned long long int var_10 = 2576236102047015398ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)146;
unsigned char var_12 = (unsigned char)152;
int var_13 = 963970813;
unsigned short var_14 = (unsigned short)34709;
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
