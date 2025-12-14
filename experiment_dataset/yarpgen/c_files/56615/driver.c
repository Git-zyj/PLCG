#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21739;
long long int var_2 = 8187234595377762144LL;
long long int var_3 = -9085405929755479259LL;
long long int var_4 = 4024240093193033298LL;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
short var_13 = (short)9832;
long long int var_14 = -8785457631541148529LL;
unsigned char var_15 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
