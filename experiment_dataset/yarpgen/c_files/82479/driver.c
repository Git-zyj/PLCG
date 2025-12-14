#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1759746248;
long long int var_5 = -6872343132988635012LL;
unsigned long long int var_6 = 3191476511342989683ULL;
long long int var_7 = -245352355105633752LL;
unsigned int var_13 = 675828612U;
short var_16 = (short)-17331;
unsigned short var_17 = (unsigned short)16392;
int zero = 0;
int var_19 = -326604890;
long long int var_20 = -3877433684520391117LL;
long long int var_21 = -1502323041330694161LL;
unsigned short var_22 = (unsigned short)28608;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
