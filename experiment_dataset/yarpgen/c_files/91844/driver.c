#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
unsigned char var_4 = (unsigned char)133;
int var_6 = 1077055838;
int var_10 = -631252408;
int zero = 0;
unsigned short var_12 = (unsigned short)59337;
int var_13 = -2089534367;
short var_14 = (short)-23708;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
