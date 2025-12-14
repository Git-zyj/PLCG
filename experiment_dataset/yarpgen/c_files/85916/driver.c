#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1571155811;
int var_5 = 777468951;
unsigned short var_7 = (unsigned short)34810;
long long int var_9 = -7173191559662003487LL;
unsigned short var_11 = (unsigned short)65381;
int zero = 0;
unsigned char var_12 = (unsigned char)76;
signed char var_13 = (signed char)59;
unsigned short var_14 = (unsigned short)41824;
unsigned short var_15 = (unsigned short)28822;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
