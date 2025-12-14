#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned long long int var_4 = 2363444441120315985ULL;
short var_6 = (short)4136;
long long int var_7 = -6854489095391122383LL;
unsigned long long int var_9 = 3697984865260156527ULL;
unsigned int var_11 = 1283771062U;
unsigned int var_12 = 2150129597U;
int zero = 0;
long long int var_18 = -3568140187146278624LL;
unsigned long long int var_19 = 3273335821056496004ULL;
short var_20 = (short)-18000;
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
