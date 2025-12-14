#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2138641385;
int var_2 = -1836913113;
unsigned short var_3 = (unsigned short)29152;
int var_4 = 1588508671;
unsigned char var_5 = (unsigned char)229;
long long int var_6 = 1006170834686173884LL;
unsigned short var_8 = (unsigned short)2239;
long long int var_10 = 445051665622477195LL;
int zero = 0;
int var_12 = -576439417;
unsigned short var_13 = (unsigned short)5119;
int var_14 = 1281327168;
void init() {
}

void checksum() {
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
