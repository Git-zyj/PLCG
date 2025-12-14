#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_7 = (short)-26525;
unsigned long long int var_9 = 15914980963300478392ULL;
unsigned char var_10 = (unsigned char)153;
unsigned short var_13 = (unsigned short)51610;
signed char var_16 = (signed char)44;
signed char var_17 = (signed char)101;
int zero = 0;
short var_18 = (short)-23266;
int var_19 = 989793023;
short var_20 = (short)32110;
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
