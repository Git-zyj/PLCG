#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned short var_2 = (unsigned short)31798;
short var_4 = (short)2055;
unsigned short var_5 = (unsigned short)57515;
unsigned char var_6 = (unsigned char)32;
unsigned char var_7 = (unsigned char)225;
unsigned long long int var_8 = 9781638401318475557ULL;
unsigned char var_9 = (unsigned char)4;
int zero = 0;
short var_10 = (short)-30655;
unsigned char var_11 = (unsigned char)103;
short var_12 = (short)-16953;
signed char var_13 = (signed char)-113;
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
