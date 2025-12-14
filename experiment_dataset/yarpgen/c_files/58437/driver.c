#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
int var_1 = -1698828172;
int var_6 = 408120391;
unsigned char var_10 = (unsigned char)32;
int var_12 = 361199870;
unsigned char var_13 = (unsigned char)239;
short var_14 = (short)4283;
int zero = 0;
unsigned char var_16 = (unsigned char)111;
unsigned short var_17 = (unsigned short)61143;
long long int var_18 = 960569948334018600LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
