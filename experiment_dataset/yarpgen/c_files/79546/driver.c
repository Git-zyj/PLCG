#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)35878;
unsigned long long int var_4 = 2070194879233210293ULL;
unsigned long long int var_10 = 13861889353991229484ULL;
unsigned short var_11 = (unsigned short)14442;
unsigned short var_13 = (unsigned short)61843;
unsigned short var_17 = (unsigned short)52128;
short var_19 = (short)-6460;
int zero = 0;
short var_20 = (short)-3524;
unsigned short var_21 = (unsigned short)44675;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
