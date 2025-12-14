#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)67;
unsigned char var_5 = (unsigned char)95;
unsigned int var_9 = 2431790819U;
unsigned short var_10 = (unsigned short)26039;
unsigned long long int var_11 = 2144435917116980440ULL;
unsigned short var_15 = (unsigned short)9343;
unsigned short var_16 = (unsigned short)45514;
int zero = 0;
unsigned long long int var_18 = 2003684872471298979ULL;
unsigned short var_19 = (unsigned short)61248;
unsigned char var_20 = (unsigned char)62;
int var_21 = 837359450;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
