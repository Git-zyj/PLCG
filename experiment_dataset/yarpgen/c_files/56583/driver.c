#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1252917019;
unsigned char var_3 = (unsigned char)10;
signed char var_5 = (signed char)20;
signed char var_6 = (signed char)-28;
unsigned int var_7 = 1224904738U;
int zero = 0;
int var_11 = 250233528;
unsigned short var_12 = (unsigned short)52558;
int var_13 = 1717232622;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
