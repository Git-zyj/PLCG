#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13622135430676351065ULL;
unsigned short var_3 = (unsigned short)26439;
short var_5 = (short)5100;
unsigned char var_7 = (unsigned char)76;
short var_9 = (short)-20568;
unsigned long long int var_10 = 11691586036890289288ULL;
short var_13 = (short)16905;
int zero = 0;
unsigned char var_14 = (unsigned char)70;
unsigned short var_15 = (unsigned short)50915;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
