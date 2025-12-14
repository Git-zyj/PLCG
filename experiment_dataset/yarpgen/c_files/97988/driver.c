#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-15157;
unsigned long long int var_6 = 10513387697042594008ULL;
unsigned int var_7 = 1016377115U;
unsigned short var_15 = (unsigned short)3998;
long long int var_17 = 8033810746257127976LL;
int zero = 0;
unsigned long long int var_20 = 5644710067445036712ULL;
long long int var_21 = -6722388738268799448LL;
int var_22 = 159941311;
void init() {
}

void checksum() {
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
