#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3567643290084798589LL;
unsigned short var_4 = (unsigned short)30550;
int var_6 = 1476602334;
unsigned short var_7 = (unsigned short)52859;
unsigned char var_9 = (unsigned char)4;
unsigned int var_11 = 2010893228U;
long long int var_15 = 7554936026615013549LL;
unsigned char var_16 = (unsigned char)69;
int zero = 0;
unsigned int var_18 = 808814686U;
long long int var_19 = -3003498937307241268LL;
unsigned short var_20 = (unsigned short)9830;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
