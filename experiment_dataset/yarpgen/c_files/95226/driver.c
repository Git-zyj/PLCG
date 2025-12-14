#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-16212;
short var_5 = (short)1693;
long long int var_7 = -169429279004964830LL;
unsigned long long int var_9 = 12826507457530123930ULL;
int zero = 0;
short var_13 = (short)17102;
short var_14 = (short)-7452;
unsigned long long int var_15 = 3556329931722752912ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
