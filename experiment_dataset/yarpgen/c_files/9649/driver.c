#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)83;
unsigned int var_2 = 3478577285U;
unsigned short var_3 = (unsigned short)64602;
unsigned short var_7 = (unsigned short)50384;
long long int var_9 = -3580053562417941852LL;
unsigned int var_10 = 2977166392U;
long long int var_11 = -4248420776069210770LL;
int zero = 0;
unsigned int var_12 = 1802300069U;
short var_13 = (short)-1275;
unsigned short var_14 = (unsigned short)22476;
void init() {
}

void checksum() {
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
