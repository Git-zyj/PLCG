#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6584;
unsigned long long int var_2 = 6011985184356649154ULL;
long long int var_5 = 7785093440691999979LL;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)60358;
int zero = 0;
long long int var_12 = 4082704063540090848LL;
unsigned char var_13 = (unsigned char)202;
long long int var_14 = -6489669364182052881LL;
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
