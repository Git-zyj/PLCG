#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1671;
unsigned long long int var_4 = 7669206646322003162ULL;
long long int var_7 = 70541152621521613LL;
signed char var_10 = (signed char)-23;
int zero = 0;
signed char var_19 = (signed char)-87;
unsigned long long int var_20 = 4986376194177996290ULL;
signed char var_21 = (signed char)-34;
unsigned short var_22 = (unsigned short)17487;
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
