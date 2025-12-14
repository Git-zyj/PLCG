#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -61204092;
unsigned long long int var_2 = 13904959038652521441ULL;
unsigned long long int var_3 = 14730560214023499206ULL;
unsigned short var_4 = (unsigned short)38263;
unsigned char var_6 = (unsigned char)151;
unsigned short var_7 = (unsigned short)15152;
_Bool var_8 = (_Bool)0;
int var_10 = -1108075523;
unsigned long long int var_11 = 17349021685584278703ULL;
unsigned short var_12 = (unsigned short)37514;
int zero = 0;
unsigned char var_13 = (unsigned char)185;
_Bool var_14 = (_Bool)0;
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
