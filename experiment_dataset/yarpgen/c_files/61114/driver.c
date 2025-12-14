#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31868;
unsigned char var_2 = (unsigned char)137;
int var_3 = -259618008;
unsigned char var_5 = (unsigned char)239;
int var_6 = 541662991;
int var_7 = 6004399;
unsigned char var_8 = (unsigned char)50;
int var_9 = 940837671;
unsigned short var_10 = (unsigned short)51758;
int zero = 0;
short var_11 = (short)-17355;
unsigned int var_12 = 135033752U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 15391052640589907283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
