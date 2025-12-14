#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2810685350U;
unsigned char var_4 = (unsigned char)189;
signed char var_5 = (signed char)82;
unsigned short var_8 = (unsigned short)42728;
short var_9 = (short)-32347;
unsigned short var_10 = (unsigned short)54290;
unsigned short var_13 = (unsigned short)51564;
unsigned int var_14 = 2661803332U;
unsigned short var_15 = (unsigned short)33956;
short var_16 = (short)-9071;
int zero = 0;
unsigned long long int var_19 = 8194809366838067848ULL;
short var_20 = (short)21040;
unsigned int var_21 = 3087933771U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
