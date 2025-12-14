#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
short var_2 = (short)-15577;
unsigned char var_3 = (unsigned char)8;
unsigned long long int var_8 = 9524906665391805118ULL;
unsigned long long int var_13 = 8234534802939720307ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)43581;
int var_15 = -1404556189;
signed char var_16 = (signed char)91;
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
