#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)104;
unsigned short var_7 = (unsigned short)22844;
unsigned int var_11 = 128602394U;
int var_17 = 580568660;
int zero = 0;
unsigned int var_19 = 389403599U;
signed char var_20 = (signed char)-54;
unsigned short var_21 = (unsigned short)53019;
signed char var_22 = (signed char)-78;
short var_23 = (short)5628;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
