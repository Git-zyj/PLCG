#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10900062384986760701ULL;
int var_3 = 1469981159;
unsigned short var_6 = (unsigned short)13257;
unsigned char var_9 = (unsigned char)173;
unsigned long long int var_11 = 15688466260026395832ULL;
int zero = 0;
unsigned long long int var_18 = 9451984483471430615ULL;
short var_19 = (short)-16314;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
