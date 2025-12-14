#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64473;
unsigned short var_2 = (unsigned short)16471;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_12 = (short)6994;
unsigned char var_13 = (unsigned char)250;
_Bool var_14 = (_Bool)0;
long long int var_15 = 694309645794660671LL;
unsigned short var_17 = (unsigned short)46612;
unsigned short var_18 = (unsigned short)38517;
short var_19 = (short)-23937;
int zero = 0;
long long int var_20 = 2373325521713094278LL;
unsigned int var_21 = 2898067512U;
unsigned char var_22 = (unsigned char)51;
unsigned long long int var_23 = 15681039132984982241ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
