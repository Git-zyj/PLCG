#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3954665718502958126LL;
unsigned char var_6 = (unsigned char)56;
short var_8 = (short)-29019;
int var_12 = 551170255;
signed char var_14 = (signed char)64;
unsigned char var_17 = (unsigned char)87;
short var_19 = (short)-15896;
int zero = 0;
short var_20 = (short)29057;
unsigned char var_21 = (unsigned char)20;
void init() {
}

void checksum() {
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
