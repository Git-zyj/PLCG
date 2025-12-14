#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2274879404724811064ULL;
unsigned char var_5 = (unsigned char)27;
int var_7 = -181924445;
unsigned long long int var_8 = 15969136671526446474ULL;
unsigned char var_9 = (unsigned char)177;
unsigned char var_10 = (unsigned char)74;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
unsigned int var_14 = 2394125727U;
unsigned long long int var_15 = 16277585611901888123ULL;
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
