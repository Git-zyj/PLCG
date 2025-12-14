#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1488365400;
unsigned short var_3 = (unsigned short)10311;
unsigned char var_4 = (unsigned char)117;
long long int var_9 = 472665507578316252LL;
signed char var_10 = (signed char)21;
int zero = 0;
short var_13 = (short)-11674;
signed char var_14 = (signed char)-87;
void init() {
}

void checksum() {
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
