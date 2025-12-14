#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3763967676U;
unsigned long long int var_6 = 12490341931946505563ULL;
unsigned int var_10 = 1011697283U;
int var_11 = -237637678;
int zero = 0;
unsigned char var_17 = (unsigned char)183;
unsigned short var_18 = (unsigned short)63047;
int var_19 = -918085239;
unsigned long long int var_20 = 14629991433320155715ULL;
unsigned char var_21 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
