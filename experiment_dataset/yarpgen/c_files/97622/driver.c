#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32656;
long long int var_3 = -1268968384670026251LL;
unsigned int var_4 = 1055110147U;
unsigned int var_5 = 4100712468U;
int var_6 = -1904507571;
int var_7 = -1827737786;
unsigned char var_8 = (unsigned char)11;
unsigned short var_10 = (unsigned short)64455;
int zero = 0;
unsigned char var_13 = (unsigned char)220;
unsigned short var_14 = (unsigned short)62757;
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
