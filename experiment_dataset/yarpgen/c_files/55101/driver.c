#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-32637;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 15523011833241750413ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)62660;
int zero = 0;
unsigned int var_16 = 1347866799U;
unsigned char var_17 = (unsigned char)167;
unsigned int var_18 = 1333441565U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
