#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
int var_20 = 646983650;
unsigned long long int var_21 = 16259026938725282529ULL;
int var_22 = 416056338;
int var_23 = -1679094402;
long long int var_24 = -5810441321533140560LL;
int var_25 = -277198934;
unsigned int var_26 = 1483500406U;
unsigned char var_27 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
