#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13881;
unsigned char var_2 = (unsigned char)126;
int var_6 = -162223532;
int var_10 = 189813907;
unsigned short var_12 = (unsigned short)11283;
unsigned char var_14 = (unsigned char)78;
unsigned char var_17 = (unsigned char)36;
int var_19 = -651574448;
int zero = 0;
unsigned short var_20 = (unsigned short)51075;
short var_21 = (short)30281;
signed char var_22 = (signed char)-119;
int var_23 = -1292453218;
void init() {
}

void checksum() {
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
