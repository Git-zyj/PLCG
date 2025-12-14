#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45904;
unsigned int var_1 = 1314600632U;
unsigned short var_3 = (unsigned short)47806;
short var_4 = (short)31877;
short var_5 = (short)-2293;
unsigned short var_10 = (unsigned short)38835;
int zero = 0;
unsigned int var_11 = 1344635704U;
unsigned char var_12 = (unsigned char)241;
long long int var_13 = -2834320112665174725LL;
short var_14 = (short)-25194;
short var_15 = (short)-26418;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
