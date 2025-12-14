#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37581;
signed char var_1 = (signed char)45;
unsigned char var_2 = (unsigned char)229;
short var_5 = (short)-22045;
int var_7 = 1055389552;
short var_8 = (short)-20227;
int var_10 = 906332914;
unsigned short var_11 = (unsigned short)25439;
signed char var_13 = (signed char)91;
signed char var_14 = (signed char)83;
int zero = 0;
unsigned short var_17 = (unsigned short)9962;
unsigned short var_18 = (unsigned short)57740;
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
