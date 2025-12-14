#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
unsigned int var_2 = 1839542962U;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)137;
int var_6 = 260381493;
long long int var_7 = -5242019536730691650LL;
unsigned short var_8 = (unsigned short)53662;
signed char var_9 = (signed char)49;
long long int var_11 = -228138241432163576LL;
unsigned char var_12 = (unsigned char)35;
unsigned long long int var_15 = 1040151770971192686ULL;
int var_17 = -1686109133;
int zero = 0;
unsigned char var_18 = (unsigned char)105;
unsigned long long int var_19 = 4436163462212403114ULL;
unsigned char var_20 = (unsigned char)203;
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
