#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -726850300;
int var_2 = -235812559;
unsigned short var_3 = (unsigned short)6369;
unsigned long long int var_4 = 86396337650460119ULL;
unsigned short var_5 = (unsigned short)14554;
signed char var_6 = (signed char)29;
unsigned long long int var_8 = 3896082666060483795ULL;
int var_13 = 771584985;
unsigned short var_14 = (unsigned short)48204;
signed char var_15 = (signed char)107;
int zero = 0;
unsigned short var_19 = (unsigned short)4788;
unsigned char var_20 = (unsigned char)166;
unsigned long long int var_21 = 8112720973607653532ULL;
unsigned char var_22 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
