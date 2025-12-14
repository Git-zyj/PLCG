#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61832;
unsigned char var_2 = (unsigned char)133;
long long int var_3 = -7353150975353741674LL;
int var_4 = 1632293114;
short var_6 = (short)-22175;
long long int var_7 = -2438193480189010145LL;
unsigned short var_10 = (unsigned short)15856;
int var_11 = 1937875639;
unsigned char var_12 = (unsigned char)165;
int var_14 = 1952584021;
int zero = 0;
unsigned short var_15 = (unsigned short)64955;
short var_16 = (short)-27021;
int var_17 = 1086020721;
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
