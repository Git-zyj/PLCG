#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49217;
unsigned long long int var_1 = 9584502073253683555ULL;
unsigned long long int var_2 = 4443032978425580140ULL;
unsigned long long int var_3 = 9637718122772748179ULL;
unsigned char var_6 = (unsigned char)86;
signed char var_10 = (signed char)-57;
int zero = 0;
unsigned short var_11 = (unsigned short)29894;
short var_12 = (short)-19207;
unsigned long long int var_13 = 1606406661535466588ULL;
unsigned char var_14 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
