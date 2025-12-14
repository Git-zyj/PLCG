#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 412447497;
unsigned short var_6 = (unsigned short)38705;
short var_12 = (short)-23074;
unsigned char var_14 = (unsigned char)36;
int zero = 0;
unsigned long long int var_18 = 15435491867233172868ULL;
unsigned int var_19 = 1217929987U;
short var_20 = (short)-9024;
unsigned short var_21 = (unsigned short)19374;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
