#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1319680528273420412LL;
unsigned short var_2 = (unsigned short)16730;
long long int var_8 = 1935228120212111697LL;
unsigned char var_9 = (unsigned char)203;
int zero = 0;
short var_10 = (short)-26920;
int var_11 = -2120909291;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
