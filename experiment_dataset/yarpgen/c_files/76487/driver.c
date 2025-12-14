#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1304539284;
unsigned short var_2 = (unsigned short)1636;
signed char var_3 = (signed char)99;
unsigned int var_4 = 4245774778U;
long long int var_8 = -5824996643578547790LL;
short var_9 = (short)-15649;
unsigned int var_10 = 928028568U;
signed char var_11 = (signed char)100;
int zero = 0;
short var_14 = (short)31202;
unsigned int var_15 = 350218077U;
unsigned int var_16 = 2070644109U;
unsigned int var_17 = 2601911593U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
