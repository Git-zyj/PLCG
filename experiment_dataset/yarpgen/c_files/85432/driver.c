#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5772;
unsigned char var_2 = (unsigned char)211;
unsigned int var_3 = 2015362749U;
short var_5 = (short)-26617;
unsigned char var_6 = (unsigned char)52;
unsigned short var_9 = (unsigned short)18464;
int zero = 0;
unsigned int var_10 = 3789326381U;
unsigned int var_11 = 2417403656U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
