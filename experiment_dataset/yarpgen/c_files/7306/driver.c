#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37854;
unsigned long long int var_3 = 15307770304519256814ULL;
unsigned char var_7 = (unsigned char)153;
unsigned short var_8 = (unsigned short)25925;
unsigned long long int var_12 = 7743530808139188137ULL;
int zero = 0;
int var_13 = 1467086222;
short var_14 = (short)26788;
long long int var_15 = -1259008498510812889LL;
unsigned short var_16 = (unsigned short)7576;
unsigned short var_17 = (unsigned short)40397;
long long int var_18 = 7104929806862338515LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
