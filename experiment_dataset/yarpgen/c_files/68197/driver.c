#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
long long int var_1 = 5895898590854872465LL;
signed char var_2 = (signed char)-48;
unsigned char var_3 = (unsigned char)217;
long long int var_5 = -1911834844362573364LL;
long long int var_6 = -6184587436742571010LL;
signed char var_9 = (signed char)-49;
int zero = 0;
unsigned int var_13 = 108851378U;
unsigned short var_14 = (unsigned short)8512;
unsigned char var_15 = (unsigned char)165;
unsigned short var_16 = (unsigned short)17700;
short var_17 = (short)17161;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
