#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)121;
unsigned char var_5 = (unsigned char)65;
signed char var_10 = (signed char)-17;
unsigned short var_16 = (unsigned short)12965;
unsigned long long int var_17 = 6745360704193254277ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 1198470911843117725ULL;
int var_22 = -2121754259;
void init() {
}

void checksum() {
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
