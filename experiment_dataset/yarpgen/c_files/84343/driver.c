#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2678737994U;
int var_4 = -277693882;
unsigned char var_6 = (unsigned char)119;
unsigned char var_7 = (unsigned char)51;
unsigned short var_9 = (unsigned short)9711;
int var_12 = 1886071668;
unsigned char var_14 = (unsigned char)174;
unsigned int var_16 = 1780008371U;
int zero = 0;
signed char var_18 = (signed char)-125;
unsigned char var_19 = (unsigned char)170;
short var_20 = (short)-32015;
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
