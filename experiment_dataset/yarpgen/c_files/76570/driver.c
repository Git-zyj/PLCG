#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)20140;
short var_6 = (short)934;
unsigned int var_8 = 3554094985U;
unsigned char var_11 = (unsigned char)19;
int var_13 = 1412941872;
short var_14 = (short)-13308;
short var_15 = (short)16546;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = 6765889563069284237LL;
int var_18 = 1049058777;
long long int var_19 = 381931928513904186LL;
long long int var_20 = 6723752317218056244LL;
short var_21 = (short)-30201;
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
