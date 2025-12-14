#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8704529988925304555ULL;
unsigned short var_2 = (unsigned short)63308;
unsigned short var_3 = (unsigned short)25072;
unsigned long long int var_5 = 14575243092594302216ULL;
unsigned char var_7 = (unsigned char)249;
signed char var_8 = (signed char)75;
int zero = 0;
int var_10 = -1146040823;
unsigned char var_11 = (unsigned char)11;
short var_12 = (short)-18868;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
