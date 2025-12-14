#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21893;
unsigned char var_1 = (unsigned char)26;
int var_2 = 1327590100;
unsigned char var_3 = (unsigned char)141;
signed char var_14 = (signed char)-37;
int zero = 0;
int var_15 = 1406147612;
unsigned short var_16 = (unsigned short)38065;
void init() {
}

void checksum() {
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
