#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9774;
unsigned long long int var_2 = 16460625681272226741ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 1666046866U;
unsigned short var_8 = (unsigned short)59891;
int zero = 0;
int var_10 = -1267908886;
unsigned char var_11 = (unsigned char)120;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-3618;
unsigned char var_14 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
