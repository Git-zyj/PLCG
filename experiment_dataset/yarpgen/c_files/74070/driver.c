#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7441;
unsigned int var_2 = 2578216540U;
unsigned short var_3 = (unsigned short)36837;
unsigned int var_4 = 4260379116U;
int var_5 = -561297458;
short var_8 = (short)29613;
int zero = 0;
short var_11 = (short)17537;
long long int var_12 = -1769367542467947222LL;
long long int var_13 = 7773816961240571131LL;
unsigned char var_14 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
