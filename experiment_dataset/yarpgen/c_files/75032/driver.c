#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6106193084708220336LL;
int var_1 = -1441942908;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)44;
unsigned char var_10 = (unsigned char)197;
_Bool var_11 = (_Bool)1;
short var_16 = (short)-989;
int zero = 0;
unsigned short var_17 = (unsigned short)59264;
int var_18 = -1949160935;
long long int var_19 = -6096890476873631901LL;
unsigned short var_20 = (unsigned short)2160;
unsigned long long int var_21 = 7824205855075447891ULL;
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
