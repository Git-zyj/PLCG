#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58138;
long long int var_3 = -5762727756812061050LL;
short var_4 = (short)10951;
unsigned short var_5 = (unsigned short)55230;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)249;
int zero = 0;
unsigned long long int var_10 = 13411099866042132110ULL;
unsigned char var_11 = (unsigned char)109;
long long int var_12 = 3651749359491131043LL;
short var_13 = (short)-13797;
unsigned int var_14 = 1114307141U;
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
