#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3462228071242760681LL;
unsigned char var_3 = (unsigned char)204;
unsigned long long int var_5 = 8098344005072610054ULL;
_Bool var_6 = (_Bool)0;
long long int var_9 = 9055982327402384633LL;
short var_10 = (short)-10896;
unsigned short var_14 = (unsigned short)32274;
int zero = 0;
unsigned short var_15 = (unsigned short)45675;
short var_16 = (short)-28465;
long long int var_17 = 1141901480460379284LL;
unsigned long long int var_18 = 13782443512215496637ULL;
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
