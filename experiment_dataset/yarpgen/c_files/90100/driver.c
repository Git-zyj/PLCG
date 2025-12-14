#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32180;
signed char var_4 = (signed char)4;
unsigned int var_7 = 3607127392U;
unsigned short var_11 = (unsigned short)31271;
unsigned int var_14 = 3819540904U;
int var_15 = -1410652274;
int zero = 0;
unsigned short var_19 = (unsigned short)5577;
short var_20 = (short)2937;
long long int var_21 = -9014056445986984059LL;
unsigned int var_22 = 1563039693U;
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
