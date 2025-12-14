#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7133;
unsigned short var_3 = (unsigned short)6928;
unsigned int var_5 = 589761148U;
unsigned char var_6 = (unsigned char)180;
long long int var_8 = 4458169935624462147LL;
int var_13 = -1630079586;
int zero = 0;
unsigned int var_14 = 147707695U;
unsigned int var_15 = 1594064699U;
void init() {
}

void checksum() {
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
