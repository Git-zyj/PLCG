#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
signed char var_2 = (signed char)-101;
unsigned short var_3 = (unsigned short)18343;
short var_5 = (short)17535;
short var_6 = (short)-805;
signed char var_7 = (signed char)59;
long long int var_8 = 1237585753848195834LL;
unsigned int var_10 = 2593207988U;
int zero = 0;
unsigned char var_13 = (unsigned char)71;
short var_14 = (short)-14850;
void init() {
}

void checksum() {
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
