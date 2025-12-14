#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1290343305;
unsigned long long int var_1 = 5085049802185798926ULL;
unsigned char var_2 = (unsigned char)84;
int var_4 = -1000890884;
unsigned short var_7 = (unsigned short)28198;
int var_8 = -1219090450;
unsigned long long int var_9 = 9476745569747610867ULL;
unsigned char var_15 = (unsigned char)67;
int zero = 0;
unsigned char var_17 = (unsigned char)230;
unsigned short var_18 = (unsigned short)582;
unsigned short var_19 = (unsigned short)50562;
long long int var_20 = 3973725852979273407LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
