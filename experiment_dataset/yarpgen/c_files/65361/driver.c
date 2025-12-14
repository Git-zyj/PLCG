#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-48;
unsigned long long int var_2 = 11993474346207778277ULL;
unsigned short var_3 = (unsigned short)13256;
int var_4 = 438916764;
int var_5 = -1410292793;
unsigned char var_7 = (unsigned char)243;
long long int var_8 = 8529553562010037711LL;
int zero = 0;
long long int var_10 = 1396175237203552907LL;
long long int var_11 = -7503469705835705253LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
