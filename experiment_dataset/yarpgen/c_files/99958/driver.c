#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)126;
unsigned char var_2 = (unsigned char)25;
int var_3 = 1991839226;
unsigned int var_4 = 2616923722U;
int var_5 = -829119132;
unsigned int var_7 = 2425429162U;
short var_8 = (short)20366;
int zero = 0;
unsigned short var_11 = (unsigned short)38710;
_Bool var_12 = (_Bool)0;
int var_13 = -1872604977;
short var_14 = (short)-3564;
unsigned short var_15 = (unsigned short)55583;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
