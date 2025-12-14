#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10346;
int var_1 = 709340492;
signed char var_4 = (signed char)-41;
long long int var_5 = -3641411541514202775LL;
unsigned short var_9 = (unsigned short)52493;
int zero = 0;
int var_11 = 492582362;
unsigned char var_12 = (unsigned char)126;
long long int var_13 = -7424417589592623447LL;
int var_14 = 930981488;
unsigned int var_15 = 1810640402U;
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
