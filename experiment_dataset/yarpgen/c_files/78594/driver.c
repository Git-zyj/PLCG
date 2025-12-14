#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1635283778;
short var_6 = (short)-12532;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-24072;
int zero = 0;
signed char var_13 = (signed char)61;
int var_14 = -544508839;
unsigned int var_15 = 458866328U;
unsigned short var_16 = (unsigned short)61787;
signed char var_17 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
