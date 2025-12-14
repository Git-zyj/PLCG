#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 418247288689336226LL;
unsigned char var_1 = (unsigned char)170;
unsigned char var_4 = (unsigned char)112;
unsigned char var_8 = (unsigned char)217;
signed char var_11 = (signed char)79;
int zero = 0;
unsigned int var_13 = 849350516U;
unsigned short var_14 = (unsigned short)57602;
short var_15 = (short)32649;
void init() {
}

void checksum() {
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
