#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6199027341886332811LL;
int var_3 = 1947689772;
short var_8 = (short)20495;
int zero = 0;
unsigned char var_11 = (unsigned char)139;
unsigned short var_12 = (unsigned short)4759;
long long int var_13 = -7905663369745628027LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
