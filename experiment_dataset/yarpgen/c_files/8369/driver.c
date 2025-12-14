#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12248666137362676824ULL;
unsigned short var_1 = (unsigned short)37113;
long long int var_3 = -2617925160483120230LL;
unsigned short var_4 = (unsigned short)532;
unsigned char var_8 = (unsigned char)87;
short var_11 = (short)-4855;
unsigned long long int var_13 = 16526880725032314741ULL;
int zero = 0;
long long int var_15 = 604863936401380765LL;
int var_16 = -532517685;
unsigned char var_17 = (unsigned char)203;
void init() {
}

void checksum() {
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
