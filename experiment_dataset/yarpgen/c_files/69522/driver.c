#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1526823174;
_Bool var_3 = (_Bool)0;
short var_5 = (short)-30714;
int var_8 = 1767223751;
unsigned char var_9 = (unsigned char)90;
signed char var_16 = (signed char)34;
int zero = 0;
signed char var_17 = (signed char)3;
signed char var_18 = (signed char)107;
unsigned short var_19 = (unsigned short)33167;
int var_20 = 1185482295;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
