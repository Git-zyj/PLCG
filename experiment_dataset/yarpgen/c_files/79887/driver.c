#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
signed char var_2 = (signed char)-63;
short var_3 = (short)-19930;
unsigned long long int var_4 = 14179975003658350657ULL;
int var_8 = 1735037090;
unsigned char var_12 = (unsigned char)160;
unsigned long long int var_14 = 16421038721856943647ULL;
unsigned short var_16 = (unsigned short)63064;
int zero = 0;
int var_17 = -537057018;
short var_18 = (short)-11574;
unsigned short var_19 = (unsigned short)1810;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
