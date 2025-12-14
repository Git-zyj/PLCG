#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 283600923104993975ULL;
unsigned int var_4 = 421954884U;
unsigned int var_6 = 90391515U;
unsigned int var_7 = 3490604762U;
unsigned int var_9 = 3892108246U;
unsigned char var_11 = (unsigned char)116;
unsigned int var_13 = 4195432210U;
unsigned long long int var_14 = 3994414902908753656ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)254;
unsigned int var_16 = 2663070361U;
unsigned int var_17 = 4194680786U;
unsigned int var_18 = 1382326440U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
