#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 418765777;
short var_4 = (short)-22272;
unsigned short var_6 = (unsigned short)23071;
unsigned int var_8 = 3062664752U;
int var_10 = 1218375139;
unsigned short var_12 = (unsigned short)16070;
int zero = 0;
unsigned long long int var_16 = 12639993587547412557ULL;
unsigned short var_17 = (unsigned short)16418;
unsigned long long int var_18 = 15672541985207121946ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
