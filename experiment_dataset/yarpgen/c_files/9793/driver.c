#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)151;
int var_5 = -793959714;
long long int var_6 = 7657436901838024771LL;
unsigned short var_8 = (unsigned short)65358;
int zero = 0;
long long int var_10 = 1377137329278826247LL;
int var_11 = -1092343313;
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
