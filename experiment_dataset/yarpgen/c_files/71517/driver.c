#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4822;
int var_2 = -1369809934;
long long int var_3 = -7097050817050516821LL;
short var_7 = (short)7199;
unsigned short var_9 = (unsigned short)38836;
long long int var_11 = 4361373244997650296LL;
int zero = 0;
long long int var_15 = -449656698876472628LL;
unsigned char var_16 = (unsigned char)61;
unsigned char var_17 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
