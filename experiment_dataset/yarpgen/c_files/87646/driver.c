#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
short var_2 = (short)7281;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 18255423126030967409ULL;
unsigned short var_7 = (unsigned short)54873;
short var_8 = (short)-12004;
unsigned int var_9 = 408801860U;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
unsigned long long int var_11 = 6252518752438519304ULL;
unsigned short var_12 = (unsigned short)35220;
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
