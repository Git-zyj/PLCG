#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11667;
unsigned short var_8 = (unsigned short)32077;
unsigned char var_10 = (unsigned char)4;
short var_11 = (short)25333;
short var_12 = (short)-25305;
int zero = 0;
unsigned short var_19 = (unsigned short)49479;
signed char var_20 = (signed char)38;
short var_21 = (short)10560;
short var_22 = (short)-19482;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
