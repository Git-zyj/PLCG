#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1086092867;
unsigned short var_10 = (unsigned short)13975;
short var_12 = (short)-1617;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)23;
unsigned short var_19 = (unsigned short)29787;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
