#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28103;
long long int var_3 = -4127178175407562716LL;
long long int var_4 = 9166617606425060339LL;
short var_6 = (short)-28928;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)57469;
int var_11 = -1105626913;
long long int var_12 = 1747509757006476401LL;
signed char var_13 = (signed char)36;
short var_14 = (short)13696;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
