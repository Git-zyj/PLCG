#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -684030410;
long long int var_2 = 8033241780462669904LL;
int var_8 = -860892404;
int var_10 = -1149986623;
unsigned int var_11 = 3809984793U;
int zero = 0;
signed char var_13 = (signed char)-102;
short var_14 = (short)-16101;
unsigned char var_15 = (unsigned char)51;
int var_16 = -65895013;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
