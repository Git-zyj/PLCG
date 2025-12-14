#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28050;
short var_1 = (short)15144;
int var_7 = 1637019055;
int zero = 0;
unsigned int var_16 = 515207146U;
unsigned long long int var_17 = 10571994826731535629ULL;
unsigned char var_18 = (unsigned char)220;
unsigned long long int var_19 = 17317671792517341442ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
