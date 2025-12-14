#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)64773;
unsigned short var_1 = (unsigned short)64770;
unsigned short var_3 = (unsigned short)19730;
unsigned short var_4 = (unsigned short)1410;
unsigned short var_6 = (unsigned short)21574;
unsigned short var_8 = (unsigned short)551;
unsigned short var_11 = (unsigned short)45490;
int zero = 0;
unsigned short var_12 = (unsigned short)42299;
unsigned short var_13 = (unsigned short)42735;
unsigned short var_14 = (unsigned short)4457;
unsigned short var_15 = (unsigned short)39153;
unsigned short var_16 = (unsigned short)2368;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
