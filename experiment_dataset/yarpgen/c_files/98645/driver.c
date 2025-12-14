#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)82;
unsigned char var_5 = (unsigned char)119;
unsigned long long int var_7 = 4750309840087683104ULL;
int zero = 0;
unsigned int var_19 = 2820397408U;
short var_20 = (short)7601;
signed char var_21 = (signed char)94;
short var_22 = (short)-769;
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
