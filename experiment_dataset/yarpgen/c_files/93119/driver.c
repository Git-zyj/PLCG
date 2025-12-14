#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32745;
short var_3 = (short)-15635;
unsigned char var_5 = (unsigned char)2;
unsigned long long int var_8 = 16153789831335617055ULL;
unsigned int var_13 = 2415506375U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2338977731U;
unsigned char var_16 = (unsigned char)180;
unsigned int var_17 = 3427735019U;
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
