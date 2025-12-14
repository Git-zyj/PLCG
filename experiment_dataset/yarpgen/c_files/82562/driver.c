#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-627;
unsigned char var_9 = (unsigned char)33;
unsigned long long int var_16 = 6282298913724828996ULL;
unsigned short var_17 = (unsigned short)59391;
int zero = 0;
short var_19 = (short)32425;
int var_20 = -728342286;
int var_21 = -846055383;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
