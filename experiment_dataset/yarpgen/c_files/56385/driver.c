#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2325798393U;
short var_3 = (short)8613;
int var_7 = 198513059;
int var_8 = 286611684;
unsigned int var_9 = 2869046495U;
unsigned char var_10 = (unsigned char)106;
unsigned char var_12 = (unsigned char)204;
int var_13 = 1715994142;
unsigned char var_15 = (unsigned char)71;
int zero = 0;
short var_16 = (short)-1055;
signed char var_17 = (signed char)-113;
long long int var_18 = 8678026139482431578LL;
unsigned short var_19 = (unsigned short)31211;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
