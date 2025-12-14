#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20981;
unsigned long long int var_3 = 1830803330975187379ULL;
int var_4 = 1625092090;
unsigned long long int var_5 = 13899950246504315751ULL;
unsigned int var_6 = 3253268236U;
unsigned int var_7 = 2265351294U;
unsigned char var_8 = (unsigned char)30;
int zero = 0;
signed char var_12 = (signed char)4;
unsigned long long int var_13 = 12144158838136297208ULL;
unsigned long long int var_14 = 13020915650085428768ULL;
void init() {
}

void checksum() {
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
