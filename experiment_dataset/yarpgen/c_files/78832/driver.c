#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)51581;
unsigned short var_2 = (unsigned short)7488;
unsigned char var_3 = (unsigned char)116;
_Bool var_7 = (_Bool)0;
int var_11 = -84672415;
unsigned char var_13 = (unsigned char)229;
unsigned long long int var_14 = 17444038943003494555ULL;
int zero = 0;
int var_16 = -1240329436;
long long int var_17 = 5115235395322332520LL;
void init() {
}

void checksum() {
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
