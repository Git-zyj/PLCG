#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2385;
int var_6 = -1383446723;
unsigned char var_8 = (unsigned char)182;
int zero = 0;
long long int var_18 = -8968248712344287416LL;
unsigned short var_19 = (unsigned short)46172;
unsigned char var_20 = (unsigned char)47;
long long int var_21 = 5125078928167648085LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
