#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 293752048U;
unsigned char var_2 = (unsigned char)217;
unsigned char var_3 = (unsigned char)196;
unsigned long long int var_5 = 10159569750046628659ULL;
int var_6 = -1787514522;
unsigned char var_8 = (unsigned char)156;
unsigned char var_11 = (unsigned char)244;
unsigned char var_12 = (unsigned char)77;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
long long int var_14 = 1238135559266591425LL;
long long int var_15 = -4096442652131150779LL;
unsigned int var_16 = 607251532U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
