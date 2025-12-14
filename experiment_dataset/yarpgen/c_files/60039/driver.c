#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27817;
unsigned char var_5 = (unsigned char)197;
unsigned short var_8 = (unsigned short)62831;
unsigned char var_10 = (unsigned char)146;
short var_17 = (short)-26665;
int zero = 0;
unsigned short var_19 = (unsigned short)40230;
unsigned short var_20 = (unsigned short)55905;
short var_21 = (short)-31797;
void init() {
}

void checksum() {
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
