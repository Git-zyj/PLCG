#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1670433945;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)43;
unsigned short var_9 = (unsigned short)47389;
short var_10 = (short)-913;
unsigned char var_12 = (unsigned char)79;
int var_17 = 829863942;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)39865;
unsigned short var_21 = (unsigned short)25636;
int var_22 = -1193343220;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
