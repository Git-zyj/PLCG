#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1500270260;
unsigned long long int var_2 = 10646108869853059791ULL;
int var_10 = 553777060;
int zero = 0;
unsigned short var_11 = (unsigned short)25102;
unsigned short var_12 = (unsigned short)56543;
short var_13 = (short)8241;
unsigned short var_14 = (unsigned short)32642;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
