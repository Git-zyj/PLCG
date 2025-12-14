#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33263;
unsigned short var_2 = (unsigned short)16681;
short var_3 = (short)-3316;
unsigned long long int var_5 = 10614790718810200701ULL;
unsigned char var_7 = (unsigned char)0;
unsigned long long int var_8 = 7802381146242089538ULL;
long long int var_9 = 5292581988065171161LL;
int zero = 0;
short var_10 = (short)-1966;
short var_11 = (short)-17753;
int var_12 = 174192595;
unsigned int var_13 = 3839802641U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
