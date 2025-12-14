#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)12596;
unsigned long long int var_7 = 13721859528598651961ULL;
short var_8 = (short)-26015;
unsigned long long int var_9 = 13803354688225870841ULL;
int zero = 0;
int var_11 = -346018488;
short var_12 = (short)19405;
unsigned int var_13 = 2758796395U;
unsigned char var_14 = (unsigned char)218;
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
