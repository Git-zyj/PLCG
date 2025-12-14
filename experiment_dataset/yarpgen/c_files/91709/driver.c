#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_3 = -6464426568300732338LL;
unsigned short var_4 = (unsigned short)38108;
unsigned short var_8 = (unsigned short)50544;
int var_12 = -709294605;
int zero = 0;
short var_15 = (short)22671;
unsigned char var_16 = (unsigned char)251;
unsigned char var_17 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
