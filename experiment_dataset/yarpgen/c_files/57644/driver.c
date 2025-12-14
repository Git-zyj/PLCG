#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-117;
int zero = 0;
unsigned short var_16 = (unsigned short)6610;
unsigned short var_17 = (unsigned short)61692;
unsigned short var_18 = (unsigned short)45976;
unsigned char var_19 = (unsigned char)130;
unsigned short var_20 = (unsigned short)51249;
unsigned short var_21 = (unsigned short)3186;
signed char var_22 = (signed char)79;
unsigned short var_23 = (unsigned short)38007;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
