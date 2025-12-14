#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37628;
short var_5 = (short)-18321;
short var_6 = (short)17296;
unsigned char var_11 = (unsigned char)127;
short var_15 = (short)-16891;
int zero = 0;
unsigned char var_18 = (unsigned char)205;
short var_19 = (short)10435;
long long int var_20 = -6898135261920529196LL;
unsigned short var_21 = (unsigned short)64997;
void init() {
}

void checksum() {
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
