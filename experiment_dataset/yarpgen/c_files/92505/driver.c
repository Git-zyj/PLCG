#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4432193057953507778LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_4 = 1270637501609762465ULL;
unsigned char var_8 = (unsigned char)247;
int var_12 = 1530101200;
int zero = 0;
unsigned long long int var_13 = 3318006693555938497ULL;
unsigned char var_14 = (unsigned char)77;
unsigned short var_15 = (unsigned short)17538;
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
