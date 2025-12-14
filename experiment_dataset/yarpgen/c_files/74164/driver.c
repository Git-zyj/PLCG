#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1382489756;
int var_5 = 1884019711;
unsigned short var_8 = (unsigned short)22439;
unsigned short var_10 = (unsigned short)33696;
unsigned short var_14 = (unsigned short)23688;
int zero = 0;
int var_15 = 1387383240;
unsigned short var_16 = (unsigned short)27823;
int var_17 = 506495087;
int var_18 = 1181110737;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
