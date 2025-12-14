#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3299156151648834201LL;
signed char var_9 = (signed char)-51;
signed char var_10 = (signed char)85;
unsigned long long int var_13 = 13846205688996260165ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)52;
unsigned char var_16 = (unsigned char)23;
void init() {
}

void checksum() {
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
