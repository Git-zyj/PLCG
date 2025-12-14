#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12087336045784169152ULL;
int var_1 = -1532155370;
short var_3 = (short)-11286;
short var_10 = (short)-7437;
int var_13 = -813293895;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
unsigned char var_17 = (unsigned char)167;
int var_18 = 1835256267;
long long int var_19 = 2590807688028020932LL;
unsigned long long int var_20 = 8429178888023308359ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
