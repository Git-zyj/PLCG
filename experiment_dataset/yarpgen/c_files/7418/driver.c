#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16156;
unsigned short var_2 = (unsigned short)24952;
unsigned short var_4 = (unsigned short)61039;
unsigned char var_5 = (unsigned char)227;
unsigned long long int var_7 = 9345761158212306620ULL;
int var_8 = 1660410751;
int zero = 0;
long long int var_11 = -4605841642826186357LL;
unsigned long long int var_12 = 17842377530006478855ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
