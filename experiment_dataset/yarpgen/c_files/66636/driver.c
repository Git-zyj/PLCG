#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2189;
unsigned long long int var_3 = 17665946211730636759ULL;
unsigned short var_4 = (unsigned short)50413;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-13494;
int var_8 = 1658067718;
int zero = 0;
unsigned char var_10 = (unsigned char)177;
unsigned short var_11 = (unsigned short)20483;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
