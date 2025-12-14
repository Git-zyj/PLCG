#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)194;
long long int var_2 = 399304454613094804LL;
unsigned long long int var_3 = 17675656694914204371ULL;
unsigned char var_4 = (unsigned char)44;
unsigned int var_5 = 611370506U;
unsigned int var_11 = 985892989U;
unsigned long long int var_12 = 8782387842787263252ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)35463;
long long int var_16 = -3137927669553216122LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
