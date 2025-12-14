#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1375275494;
int var_2 = 1855632570;
signed char var_7 = (signed char)106;
int var_8 = 285144923;
short var_10 = (short)7769;
int var_11 = -1610220948;
unsigned char var_12 = (unsigned char)81;
short var_14 = (short)22876;
unsigned short var_16 = (unsigned short)54958;
int zero = 0;
unsigned char var_19 = (unsigned char)168;
int var_20 = 1761790327;
short var_21 = (short)-32411;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
