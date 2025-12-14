#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2354769418815621520LL;
short var_4 = (short)-17989;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)22004;
int zero = 0;
int var_15 = -1029939451;
long long int var_16 = -7794224241044786729LL;
unsigned char var_17 = (unsigned char)89;
void init() {
}

void checksum() {
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
