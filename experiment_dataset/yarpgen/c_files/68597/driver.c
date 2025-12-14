#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)91;
int var_2 = -1078843156;
long long int var_3 = 2841875026907996750LL;
int var_4 = -725212154;
short var_6 = (short)3860;
unsigned int var_7 = 2253716273U;
short var_10 = (short)-12547;
int zero = 0;
signed char var_11 = (signed char)124;
unsigned short var_12 = (unsigned short)57767;
void init() {
}

void checksum() {
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
