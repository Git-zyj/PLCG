#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)37;
int var_2 = -980299099;
unsigned long long int var_4 = 16747903224245909933ULL;
unsigned short var_8 = (unsigned short)36659;
int var_12 = -1847764028;
short var_15 = (short)-29496;
long long int var_16 = 4653703431105158369LL;
int zero = 0;
long long int var_17 = -8835279980837379921LL;
unsigned short var_18 = (unsigned short)44685;
void init() {
}

void checksum() {
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
