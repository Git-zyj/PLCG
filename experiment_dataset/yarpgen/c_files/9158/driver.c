#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)107;
unsigned char var_2 = (unsigned char)58;
signed char var_4 = (signed char)-59;
unsigned char var_5 = (unsigned char)252;
signed char var_6 = (signed char)85;
unsigned short var_8 = (unsigned short)26866;
signed char var_9 = (signed char)-2;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)44634;
int zero = 0;
short var_13 = (short)12518;
signed char var_14 = (signed char)-22;
signed char var_15 = (signed char)-126;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
