#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)95;
int var_4 = -1173114235;
short var_5 = (short)-14628;
unsigned short var_6 = (unsigned short)55634;
int zero = 0;
unsigned long long int var_10 = 17378258908618599928ULL;
long long int var_11 = 8810129446699196239LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
