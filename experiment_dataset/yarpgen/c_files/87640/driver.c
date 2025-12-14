#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)114;
short var_2 = (short)24568;
unsigned char var_3 = (unsigned char)100;
short var_11 = (short)-7720;
short var_13 = (short)13059;
int var_14 = 758436476;
unsigned long long int var_16 = 10249013303557606570ULL;
int zero = 0;
short var_17 = (short)-1248;
signed char var_18 = (signed char)123;
short var_19 = (short)-24110;
short var_20 = (short)-22221;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
