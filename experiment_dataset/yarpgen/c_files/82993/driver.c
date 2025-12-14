#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
unsigned short var_3 = (unsigned short)35528;
short var_6 = (short)-26828;
int var_7 = 1668331422;
long long int var_8 = -3035794059415766868LL;
int zero = 0;
short var_10 = (short)32130;
short var_11 = (short)18925;
unsigned short var_12 = (unsigned short)34705;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
