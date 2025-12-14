#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
short var_1 = (short)-3967;
short var_2 = (short)615;
unsigned char var_3 = (unsigned char)198;
short var_4 = (short)-10315;
unsigned char var_8 = (unsigned char)51;
unsigned int var_11 = 1422822849U;
int zero = 0;
short var_12 = (short)7094;
short var_13 = (short)17959;
void init() {
}

void checksum() {
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
