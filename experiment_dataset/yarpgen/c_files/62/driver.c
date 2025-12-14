#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12860;
unsigned char var_6 = (unsigned char)10;
int var_10 = -1452606823;
short var_12 = (short)-24022;
int zero = 0;
long long int var_13 = 1599067670251999879LL;
unsigned int var_14 = 954862656U;
unsigned char var_15 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
