#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61934;
unsigned int var_3 = 694581402U;
unsigned char var_5 = (unsigned char)105;
unsigned char var_6 = (unsigned char)114;
unsigned int var_8 = 3556014306U;
unsigned int var_10 = 3586794989U;
int zero = 0;
unsigned long long int var_11 = 4084890879121717950ULL;
long long int var_12 = -1722458431917345891LL;
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
