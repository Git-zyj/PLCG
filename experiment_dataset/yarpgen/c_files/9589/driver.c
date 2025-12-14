#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)6490;
unsigned long long int var_12 = 38484525752552829ULL;
int var_18 = 2073904478;
int zero = 0;
short var_19 = (short)-1242;
unsigned int var_20 = 3469348448U;
unsigned short var_21 = (unsigned short)53029;
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
