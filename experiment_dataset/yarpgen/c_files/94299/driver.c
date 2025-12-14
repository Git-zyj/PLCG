#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43450;
int var_12 = -732020133;
short var_15 = (short)-11600;
int zero = 0;
unsigned char var_16 = (unsigned char)115;
signed char var_17 = (signed char)-44;
unsigned char var_18 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
