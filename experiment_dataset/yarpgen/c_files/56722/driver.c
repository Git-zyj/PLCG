#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3199371331355220248ULL;
unsigned int var_1 = 271357022U;
long long int var_2 = 4038569846064832039LL;
unsigned long long int var_3 = 6001056090724185478ULL;
long long int var_4 = 132135710434817651LL;
short var_5 = (short)31093;
signed char var_8 = (signed char)66;
int var_9 = 399576234;
long long int var_10 = -2230187889168632800LL;
short var_12 = (short)26952;
unsigned short var_13 = (unsigned short)6771;
int zero = 0;
short var_14 = (short)2358;
unsigned int var_15 = 1110194700U;
unsigned long long int var_16 = 2203576282366426992ULL;
unsigned char var_17 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
