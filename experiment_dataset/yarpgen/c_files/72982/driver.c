#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_11 = (short)5693;
unsigned char var_16 = (unsigned char)142;
int zero = 0;
unsigned long long int var_19 = 15772390410423167858ULL;
unsigned char var_20 = (unsigned char)198;
unsigned short var_21 = (unsigned short)50776;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
