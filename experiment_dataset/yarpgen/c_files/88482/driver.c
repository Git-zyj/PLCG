#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2363818876U;
unsigned long long int var_7 = 3064188974538512811ULL;
short var_8 = (short)-28852;
unsigned long long int var_9 = 1830289802149112861ULL;
unsigned long long int var_12 = 15075926991142102541ULL;
unsigned char var_15 = (unsigned char)125;
int zero = 0;
unsigned int var_19 = 265563387U;
short var_20 = (short)6270;
unsigned char var_21 = (unsigned char)22;
void init() {
}

void checksum() {
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
