#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51767;
unsigned short var_1 = (unsigned short)55179;
short var_2 = (short)-11999;
signed char var_3 = (signed char)108;
short var_4 = (short)-6402;
unsigned char var_8 = (unsigned char)118;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 18297780839413199043ULL;
int zero = 0;
unsigned int var_12 = 2756384072U;
unsigned long long int var_13 = 9331546948601642675ULL;
unsigned short var_14 = (unsigned short)14128;
void init() {
}

void checksum() {
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
