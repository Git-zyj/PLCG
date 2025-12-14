#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46890;
unsigned char var_3 = (unsigned char)77;
unsigned long long int var_4 = 8041205376749756311ULL;
long long int var_6 = 8939311949482137100LL;
int var_7 = 186546781;
unsigned char var_8 = (unsigned char)245;
int zero = 0;
unsigned int var_11 = 2168961700U;
short var_12 = (short)31482;
unsigned short var_13 = (unsigned short)31232;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
