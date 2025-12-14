#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11992;
unsigned long long int var_3 = 2038374007432958066ULL;
int var_9 = -1199941712;
int var_10 = 341778601;
long long int var_12 = -8460971037253916231LL;
int var_13 = 1044796639;
unsigned short var_15 = (unsigned short)64754;
int zero = 0;
unsigned long long int var_17 = 9093542607938822260ULL;
unsigned char var_18 = (unsigned char)220;
unsigned short var_19 = (unsigned short)28502;
unsigned int var_20 = 1759687134U;
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
