#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20296;
unsigned short var_2 = (unsigned short)37928;
unsigned short var_8 = (unsigned short)46907;
short var_14 = (short)-19594;
unsigned long long int var_18 = 5975584417447867363ULL;
int zero = 0;
short var_20 = (short)-18968;
short var_21 = (short)5445;
unsigned char var_22 = (unsigned char)53;
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
