#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned char var_1 = (unsigned char)235;
signed char var_2 = (signed char)8;
unsigned short var_3 = (unsigned short)1318;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 12856186085982683278ULL;
short var_11 = (short)6615;
int var_12 = 921176663;
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
