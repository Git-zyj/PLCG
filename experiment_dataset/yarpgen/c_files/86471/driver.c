#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17373527932748963035ULL;
short var_4 = (short)-26686;
int var_8 = -1116430107;
signed char var_9 = (signed char)-69;
signed char var_10 = (signed char)73;
unsigned char var_12 = (unsigned char)140;
unsigned int var_13 = 1444753295U;
int zero = 0;
short var_15 = (short)20013;
unsigned char var_16 = (unsigned char)199;
short var_17 = (short)31185;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
