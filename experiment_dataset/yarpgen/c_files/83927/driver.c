#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)199;
unsigned int var_3 = 2748223844U;
unsigned long long int var_4 = 3737702803217571049ULL;
int var_5 = -1644160337;
signed char var_8 = (signed char)-76;
unsigned long long int var_10 = 3595885903223466751ULL;
unsigned long long int var_11 = 15187831002382004127ULL;
short var_12 = (short)-30645;
unsigned short var_13 = (unsigned short)18941;
int zero = 0;
long long int var_15 = 6178445331978126875LL;
unsigned int var_16 = 3513179126U;
int var_17 = 1948399487;
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
