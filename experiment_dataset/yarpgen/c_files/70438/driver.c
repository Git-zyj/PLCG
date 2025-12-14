#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8488;
unsigned char var_2 = (unsigned char)251;
unsigned char var_3 = (unsigned char)78;
unsigned char var_5 = (unsigned char)180;
unsigned short var_6 = (unsigned short)31406;
signed char var_10 = (signed char)-11;
unsigned long long int var_11 = 7995911735507555609ULL;
unsigned char var_12 = (unsigned char)4;
int zero = 0;
unsigned char var_13 = (unsigned char)33;
unsigned short var_14 = (unsigned short)40023;
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
