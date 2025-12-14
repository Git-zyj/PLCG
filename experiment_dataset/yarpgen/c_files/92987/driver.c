#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16880974582918147600ULL;
unsigned int var_4 = 2955062286U;
unsigned int var_6 = 489822804U;
unsigned char var_7 = (unsigned char)242;
_Bool var_9 = (_Bool)1;
int var_10 = 1655067269;
unsigned char var_11 = (unsigned char)65;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -2102553324;
int var_14 = 1229437582;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
