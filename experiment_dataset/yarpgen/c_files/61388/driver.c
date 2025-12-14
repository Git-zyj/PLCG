#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1778;
unsigned char var_6 = (unsigned char)240;
short var_9 = (short)22303;
unsigned long long int var_10 = 1823911628747405648ULL;
unsigned char var_11 = (unsigned char)98;
long long int var_12 = 7814916903598568558LL;
long long int var_13 = -7256874047531461292LL;
int zero = 0;
unsigned char var_17 = (unsigned char)170;
unsigned short var_18 = (unsigned short)10301;
unsigned short var_19 = (unsigned short)16558;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
