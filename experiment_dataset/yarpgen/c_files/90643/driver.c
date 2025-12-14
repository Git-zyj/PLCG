#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54578;
unsigned short var_2 = (unsigned short)31999;
unsigned int var_3 = 2132848349U;
short var_8 = (short)7145;
signed char var_10 = (signed char)111;
int zero = 0;
unsigned short var_12 = (unsigned short)64341;
unsigned int var_13 = 2619656045U;
int var_14 = -1022765286;
void init() {
}

void checksum() {
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
