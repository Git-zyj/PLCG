#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
short var_2 = (short)-13134;
unsigned short var_7 = (unsigned short)64947;
signed char var_8 = (signed char)84;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
unsigned char var_12 = (unsigned char)145;
unsigned short var_13 = (unsigned short)5004;
int var_14 = 970975661;
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
