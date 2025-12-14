#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8274647095280397455LL;
unsigned long long int var_5 = 7247983626178850520ULL;
unsigned char var_7 = (unsigned char)198;
long long int var_9 = -4590986482723262494LL;
unsigned short var_14 = (unsigned short)22271;
int zero = 0;
unsigned int var_15 = 2272127410U;
int var_16 = 1155353157;
unsigned short var_17 = (unsigned short)54548;
signed char var_18 = (signed char)68;
unsigned long long int var_19 = 15040630567303432147ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
