#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)40;
unsigned short var_4 = (unsigned short)5446;
unsigned short var_5 = (unsigned short)57408;
unsigned short var_6 = (unsigned short)26242;
int zero = 0;
int var_14 = 153714020;
unsigned char var_15 = (unsigned char)17;
int var_16 = -1275658063;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
