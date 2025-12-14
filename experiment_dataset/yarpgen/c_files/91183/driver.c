#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7967;
int var_3 = -1301919344;
unsigned long long int var_4 = 6830765668186888036ULL;
unsigned long long int var_5 = 15930901715620224197ULL;
unsigned short var_6 = (unsigned short)42570;
long long int var_7 = -4622641869667260390LL;
long long int var_8 = -1093164423049093282LL;
unsigned char var_9 = (unsigned char)199;
unsigned short var_10 = (unsigned short)49531;
unsigned char var_11 = (unsigned char)73;
int zero = 0;
short var_12 = (short)28669;
unsigned short var_13 = (unsigned short)21276;
unsigned short var_14 = (unsigned short)2821;
unsigned long long int var_15 = 5102463413838381201ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
