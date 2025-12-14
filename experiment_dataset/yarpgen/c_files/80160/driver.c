#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 870662707123507569ULL;
unsigned char var_2 = (unsigned char)241;
unsigned char var_3 = (unsigned char)116;
signed char var_7 = (signed char)-99;
unsigned short var_10 = (unsigned short)36063;
unsigned long long int var_11 = 8228849603734181106ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)186;
unsigned char var_13 = (unsigned char)6;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
